const int potPin = A0;
int potValue = 0;

void setup(){
    Serial.begin(9600);
}

void loop(){
    potValue = analogRead(potPin);
    Serial.print("Analog value: ");
    Serial.println(potValue);
    delay(100);
}