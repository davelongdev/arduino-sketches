// create variable for pin 5

int PIN_5 = 5;

void setup() {

  // sets LED_BUILTIN pin to output mode
  pinMode(PIN_5, OUTPUT);
}

void loop() {

  // turn the LED on (HIGH is the voltage level)
  digitalWrite(PIN_5, HIGH);

  // set delay
  delay(500);                      

  // turn the LED off by making the voltage LOW
  digitalWrite(PIN_5, LOW);   

  // set delay
  delay(3000);
}
