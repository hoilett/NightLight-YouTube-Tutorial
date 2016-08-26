//Sister's new night-light

#define Red 8
#define Green 7

void setup()
{
  pinMode(Red,OUTPUT);
  pinMode(Green,OUTPUT);
  // Initializes both pins to function as outputs to LEDs
}


void loop() //Loop creates blinking
{
  digitalWrite(Red,HIGH);
  digitalWrite(Green,LOW);
  //Red LED on, Green off
  delay(500);
  //Wait 0.5 seconds
  digitalWrite(Red,LOW);
  digitalWrite(Green,HIGH);
  delay(500);
  //Wait 0.5 seconds
  //Red LED off, Green on
  
  //Repeat in loop
}

