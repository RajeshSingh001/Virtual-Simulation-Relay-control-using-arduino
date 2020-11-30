

int BULB1 = 10;
//int led2 = 11;
void setup()
{                
  // initialize the digital pin as an output.
  pinMode(BULB1, OUTPUT);
 // pinMode(led2, OUTPUT);
}

void loop()
{
  digitalWrite(BULB1, HIGH);   // turn the LED on (HIGH is the voltage level)
  //digitalWrite(led2, HIGH); 
  delay(1000);               // wait for a second
  digitalWrite(BULB1, LOW);    // turn the LED off by making the voltage LOW
  //digitalWrite(led2, LOW); 
  delay(1000);     `'          // wait for a second
}
