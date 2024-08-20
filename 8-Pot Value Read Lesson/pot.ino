const int potPin = A0;
const int ledPin = 3;

void setup() {
    Serial.begin(9600);
    pinMode(potPin, INPUT);
    pinMode(ledPin, OUTPUT);
}

void loop() {
    int potValue = analogRead(potPin);
    int ledValue = map(potValue, 0, 1023, 0, 255);
    
    Serial.print("Potansiyometre Değeri: ");
    Serial.println(potValue);
    
    analogWrite(ledPin, ledValue);
    delay(100);  
