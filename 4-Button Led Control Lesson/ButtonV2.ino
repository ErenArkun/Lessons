const int buttonPin = 4;
const int ledPin = 7;

int buttonState = 0;
int lastButtonState = 0;

void setup(){
    pinMode(buttonPin, INPUT);
    pinMode(ledPin, OUTPUT);
}

void loop(){
    buttonState = digitalRead(buttonPin);

    if(buttonState == HIGH){
        digitalWrite(ledPin, HIGH);
    }
    else{
        digitalWrite(ledPin, HIGH);
    }
}