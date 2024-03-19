int bits = 0;
int led = 3;

void setup(){
	pinMode(led, OUTPUT);
  
  Serial.begin(9600);
}

void loop(){
	bits = analogRead(A0)/4;
  
  for(bits = 0; bits<=256; bits++){
  analogWrite(led, bits);
  Serial.println(bits);
  }
  	delay(1000);
  for(bits = 256; bits>=0; bits--){
  analogWrite(led, bits);
  Serial.println(bits);
  }
    delay(1000);
}