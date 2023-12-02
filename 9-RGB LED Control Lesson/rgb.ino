int potA = A0;
int potB = A1;
int potC = A2;

int r = 6;
int g = 5;
int b = 3;

void setup(){ 
    pinMode(potA, INPUT);
    pinMode(potB, INPUT);
    pinMode(potc, INPUT);
    
    pinMode(r, OUTPUT);
    pinMode(g, OUTPUT);
    pinMode(b, OUTPUT); 
}

void loop(){
    int potValueA = analogRead(potA);
    int potValueB = analogRead(potB);
    int potValueC = analogRead(potC);

    potValueA = map(potValueA, 0, 1023, 0, 255);
    potValueB = map(potValueB, 0, 1023, 0, 255);
    potValueC = map(potValueC, 0, 1023, 0, 255);

    analogWrite(r, potValueA);
    analogWrite(g, potValueB);
    analogWrite(b, potValueC);
}
