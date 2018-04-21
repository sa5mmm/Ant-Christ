
const int buttonPin = 2;
const int ledPin = 13;
int buttonState = 0;

void setup() {
  // put your setup code here, to run once:
pinMode(buttonPin, INPUT);
pinMode(ledPin, OUTPUT);
Serial.begin(9600);
}

void loop() {
buttonState = digitalRead(buttonPin);
  if(buttonState == HIGH) {
    digitalWrite(ledPin, HIGH);
    Serial.println("Button was pressed");
 
  } else {
    digitalWrite(ledPin, LOW);
    
  }

}

