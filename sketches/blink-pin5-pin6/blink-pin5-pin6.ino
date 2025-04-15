// create global variables for pin 5 pin 6

int PIN_5 = 5;
int PIN_6 = 6;

// setup function

void setup() {

  // sets pin 5 and pin 6 to output mode
  pinMode(PIN_5, OUTPUT);
  pinMode(PIN_6, OUTPUT);
}

// loop function

void loop() {

  // turn the LED on (HIGH is the voltage level)
  digitalWrite(PIN_5, HIGH);

  // set delay
  delay(500);                      
                                   //
  // turn the LED off by making the voltage LOW
  digitalWrite(PIN_5, LOW);   

  // set delay
  delay(500);

  // turn the LED on (HIGH is the voltage level)
  digitalWrite(PIN_6, HIGH);

  // set delay
  delay(500);                      
                                   //
  // turn the LED off by making the voltage LOW
  digitalWrite(PIN_6, LOW);   

  // set delay
  delay(500);
}
