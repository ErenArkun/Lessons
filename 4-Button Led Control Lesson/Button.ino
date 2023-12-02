#define button 4
#define led 7

void setup(){
    pinMode(button, INPUT);
    pinMode(led, OUTPUT);
}

void loop(){
    if(digitalRead(button) == HIGH){
        digitalWrite(led, HIGH);
    }
    else{
        digitalWrite(led, LOW);
    }
}