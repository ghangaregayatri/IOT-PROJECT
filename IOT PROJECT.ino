int water; //random variable 
void setup() {
  pinMode(3,OUTPUT); //output pin for relay board, this will sent signal to the relay
  pinMode(6,INPUT); //input pin coming from soil sensor
}

void loop() { 
  water = digitalRead(6);  // reading the coming signal from the soil sensor
  if(water == HIGH) // if water level is full then cut the relay 
  {
  digitalWrite(3,LOW); // low to continue proving signal and water supply
                           
  else
  {
  digitalWrite(3,HIGH); //high is to cut the relay
  }
  }
  delay(400);   
}
