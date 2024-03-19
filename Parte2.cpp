int bits = 0;
int led = 3;
float time = 0;

void setup(){
	pinMode(led, OUTPUT);
  	Serial.begin(9600);
}

void loop(){
	bits = analogRead(A0)/4;
	Serial.println(bits);

    if(bits == 0){
    time = 0;
    bits = 0;
    analogWrite(led, bits);
    bits = analogRead(A0)/4;

   }
    if(bits >0 &&  bits <= 64){
    time = 1000;
    bits = analogRead(A0)/4;

   }
    if(bits > 64 && bits <= 128){
    time = 2000;
    bits = analogRead(A0)/4;

   }
    if(bits > 128 && bits <=192){
    time = 3000;
    bits = analogRead(A0)/4;

    }
    if(bits > 192 && bits <= 256){
    time = 4000;
    bits = analogRead(A0)/4;

    }

    Serial.println(time);

    for(bits = 0; bits<=256; bits++){
  analogWrite(led, bits);
  }
  	delay(time/2);
  for(bits = 256; bits>=0; bits--){
  analogWrite(led, bits);
  }
  	Serial.println(time);
    delay(time/2);
}