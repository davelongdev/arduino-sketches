// create global variables for pins 5,6,7,8

int PIN_5 = 5;
int PIN_6 = 6;
int PIN_7 = 7;
int PIN_8 = 8;

// create delay time variable

int DELAY_TIME = 150;

// setup function

void setup() {

  // sets pins 5,6,7,8 to output mode
  pinMode(PIN_5, OUTPUT);
  pinMode(PIN_6, OUTPUT);
  pinMode(PIN_7, OUTPUT);
  pinMode(PIN_8, OUTPUT);
}


// func for red light - pin 5
void red() {

  // turn the LED on (HIGH is the voltage level)
  digitalWrite(PIN_5, HIGH);

  // set delay
  delay(DELAY_TIME);

  // turn the LED off by making the voltage LOW
  digitalWrite(PIN_5, LOW);   

  // set delay
  delay(DELAY_TIME);

}

// func for green light - pin 6
void green() {

  // turn the LED on (HIGH is the voltage level)
  digitalWrite(PIN_6, HIGH);

  // set delay
  delay(DELAY_TIME);

  // turn the LED off by making the voltage LOW
  digitalWrite(PIN_6, LOW);   

  // set delay
  delay(DELAY_TIME);

}

// func for blue 1 - pin 7
void blue_1() {
  
  // turn the LED on (HIGH is the voltage level)
  digitalWrite(PIN_7, HIGH);

  // set delay
  delay(DELAY_TIME);                      

  // turn the LED off by making the voltage LOW
  digitalWrite(PIN_7, LOW);   

  // set delay
  delay(DELAY_TIME);

}

// func for blue 2 - pin 8
void blue_2() {
  
  // turn the LED on (HIGH is the voltage level)
  digitalWrite(PIN_8, HIGH);

  // set delay
  delay(DELAY_TIME);                      

  // turn the LED off by making the voltage LOW
  digitalWrite(PIN_8, LOW);   

  // set delay
  delay(DELAY_TIME);

}

// loop function

void loop() {

  // call red function
  red();

  // call green function
  green();

  // call red function
  red();

  // call green function
  green();

  // call blue 1 function
  blue_1();

  // call blue 1 function
  blue_1();

  // call blue 2 function
  blue_2();

  // call blue 2 function
  blue_2();
}
