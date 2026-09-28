// AI Smart Glasses - voice-command prototype for Wokwi
// No screen: feedback is through speaker/buzzer + LEDs + Serial Monitor.
// Because Wokwi does not provide a general microphone/voice-recognition part,
// the three pushbuttons simulate recognized voice commands.

const int PIN_TRIG = 5;
const int PIN_ECHO = 18;
const int PIN_BUZZER = 19;
const int PIN_GREEN = 25;
const int PIN_RED = 26;

const int BTN_READ = 32;    // Simulates: "Read this"
const int BTN_OBJECT = 33;  // Simulates: "What is this?"
const int BTN_SOS = 27;     // Simulates: "Emergency help"

const int OBSTACLE_CM = 50;
unsigned long lastMeasure = 0;
unsigned long lastAlertBeep = 0;
int lastDistance = 120;

void beep(int freq, int ms) {
  tone(PIN_BUZZER, freq, ms);
}

void doubleBeep(int freq, int ms, int gap) {
  beep(freq, ms);
  delay(gap);
  beep(freq, ms);
}

long readDistanceCM() {
  digitalWrite(PIN_TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(PIN_TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(PIN_TRIG, LOW);

  unsigned long duration = pulseIn(PIN_ECHO, HIGH, 30000UL);
  if (duration == 0) return 400;
  return duration / 58;
}

bool pressed(int pin) {
  if (digitalRead(pin) == LOW) {
    delay(20);
    if (digitalRead(pin) == LOW) {
      while (digitalRead(pin) == LOW) delay(5);
      return true;
    }
  }
  return false;
}

void readyState() {
  digitalWrite(PIN_GREEN, HIGH);
  digitalWrite(PIN_RED, LOW);
}

void voiceReadCommand() {
  Serial.println();
  Serial.println("[VOICE COMMAND] READ TEXT");
  Serial.println("Assistant: I can read the detected text aloud.");
  Serial.println("Demo sentence: The future is built by those who never give up.");

  // Simulated text-to-speech rhythm
  beep(1200, 120);
  delay(100);
  beep(1400, 120);
  delay(100);
  beep(1600, 180);
}

void voiceObjectCommand() {
  Serial.println();
  Serial.println("[VOICE COMMAND] IDENTIFY OBJECT");
  Serial.println("Assistant: I detect a cup in front of you.");
  Serial.println("Confidence: 94 percent (demo result)");

  beep(900, 100);
  delay(80);
  beep(1300, 140);
}

void voiceSOSCommand() {
  Serial.println();
  Serial.println("[VOICE COMMAND] EMERGENCY HELP");
  Serial.println("Assistant: Emergency assistance activated.");
  Serial.println("Demo: location/alert would be sent to the caregiver app.");

  digitalWrite(PIN_GREEN, LOW);
  digitalWrite(PIN_RED, HIGH);
  doubleBeep(1800, 180, 120);
  delay(80);
  doubleBeep(1800, 180, 120);
  delay(300);
  readyState();
}

void obstacleAlert(int distance) {
  digitalWrite(PIN_GREEN, LOW);
  digitalWrite(PIN_RED, HIGH);

  Serial.print("[SAFETY ALERT] Obstacle detected at ");
  Serial.print(distance);
  Serial.println(" cm.");
  Serial.println("Assistant: Obstacle ahead. Please stop or turn.");

  if (millis() - lastAlertBeep > 700) {
    // Faster beeps as an intuitive warning sound
    int freq = (distance <= 20) ? 1500 : (distance <= 35 ? 1200 : 900);
    beep(freq, 160);
    lastAlertBeep = millis();
  }
}

void setup() {
  Serial.begin(115200);

  pinMode(PIN_TRIG, OUTPUT);
  pinMode(PIN_ECHO, INPUT);
  pinMode(PIN_BUZZER, OUTPUT);
  pinMode(PIN_GREEN, OUTPUT);
  pinMode(PIN_RED, OUTPUT);

  pinMode(BTN_READ, INPUT_PULLUP);
  pinMode(BTN_OBJECT, INPUT_PULLUP);
  pinMode(BTN_SOS, INPUT_PULLUP);

  digitalWrite(PIN_TRIG, LOW);
  readyState();

  Serial.println("====================================");
  Serial.println("      AI SMART GLASSES PROTOTYPE");
  Serial.println("====================================");
  Serial.println("No display: audio-first assistance.");
  Serial.println("Buttons simulate recognized voice commands:");
  Serial.println("1. READ   -> read text aloud");
  Serial.println("2. OBJECT -> identify object");
  Serial.println("3. SOS    -> emergency assistance");
  Serial.println("HC-SR04  -> real obstacle detection");
  Serial.println();
  Serial.println("System READY.");
}

void loop() {
  // Safety has highest priority.
  if (millis() - lastMeasure >= 200) {
    lastMeasure = millis();
    lastDistance = (int)readDistanceCM();
  }

  if (lastDistance < OBSTACLE_CM) {
    obstacleAlert(lastDistance);
  } else {
    readyState();

    if (pressed(BTN_READ)) {
      voiceReadCommand();
    }

    if (pressed(BTN_OBJECT)) {
      voiceObjectCommand();
    }

    if (pressed(BTN_SOS)) {
      voiceSOSCommand();
    }
  }

  delay(10);
}
