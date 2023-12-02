const int potPin = A0;

void setup(){
    Serial.begin(9600);
    pinMode(potPin, INPUT);
}

void loop(){
    int potValue = analogRead(potPin);

    Serial.print("Potansiyometre Değeri: ");
    Serial.println(potValue);

    delay(100);
}