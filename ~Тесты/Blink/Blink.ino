
/*
 *v1.0_Write_by_ImaSoft
 */

//-------------------------------------------------
void setup() {
  // initialize digital pin 13 as an output.
//  pinMode(17, OUTPUT);
//  digitalWrite(17, HIGH);
//  pinMode(14, INPUT);
//  digitalWrite(14, HIGH);                           //Pull_UP
}
//-------------------------------------------------


//-------------------------------------------------
void loop() {
  PORTD &= ~(1<<5);  
//  digitalWrite(17, HIGH);                           // turn the LED on (HIGH is the voltage level)
  delay(300);                                       // wait for a second
//  digitalWrite(17, LOW);                            // turn the LED off by making the voltage LOW
  PORTD |= (1<<5);
  delay(300);                                       // wait for a second
}
//-------------------------------------------------
