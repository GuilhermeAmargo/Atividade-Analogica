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
    Serial.println(time);
    if(bits == 0 && bits < 64){
    time = 0;
        }
    if(bits > 64 && bits <= 128){
        time = 1000;
    }
    if(bits >128 && bits <=192){
        time = 2000;
    }
  
}