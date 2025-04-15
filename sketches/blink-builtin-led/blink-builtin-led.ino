void setup() {

  // sets LED_BUILTIN pin to output mode
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {

  // turn the LED on (HIGH is the voltage level)
  digitalWrite(LED_BUILTIN, HIGH);

  // set delay
  delay(500);                      
                                   //
  // turn the LED off by making the voltage LOW
  digitalWrite(LED_BUILTIN, LOW);   

  // set delay
  delay(500);
}
