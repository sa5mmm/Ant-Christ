
//global variables
int tapCounter = 0;
int tap = 0;

int blue1 = 13;
int green1 = 12;
int yellow1 = 11;
int red = 10;
int yellow2 = 9;
int green2 = 8;
int blue2 = 6;
int button = 4;
int buzzer = 2;

void setup() {
  pinMode(blue1, OUTPUT);
  pinMode(green1, OUTPUT);
  pinMode(yellow1, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(yellow2, OUTPUT);
  pinMode(green2, OUTPUT);
  pinMode(blue2, OUTPUT);
  pinMode(button, INPUT);
  pinMode(buzzer, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  lightUpForward(tap, blue1, tapCounter);
  lightUpForward(tap, green1 , tapCounter);
  lightUpForward(tap, yellow1 , tapCounter);
  lightUpForward(tap, red , tapCounter);
  lightUpForward(tap, yellow2 , tapCounter);
  lightUpForward(tap, green2 , tapCounter);
  lightUpForward(tap, blue2, tapCounter);
  lightUpBackward(tap, blue2, tapCounter);
  lightUpBackward(tap, green2, tapCounter);
  lightUpBackward(tap, yellow2, tapCounter);
  lightUpBackward(tap, red, tapCounter);
  lightUpBackward(tap, yellow1, tapCounter);
  resetAtGreen(tap, green1, tapCounter);//set tap Counter bakc equal to zero
}

//function prototypes
void lightUpForward(int tap, int pin, int tapCounter)  {
  if(tap == 0) {
    digitalWrite(pin, HIGH);
    delay(100);
    digitalWrite(pin, LOW);
    tapCounter = tapCounter + 1;
    buttonPush(tap, tapCounter, pin);
  } 
}

void lightUpBackward(int tap, int pin, int tapCounter) {
  //Write the code with the tapCounter - 1 to go backward
  //start with blue2
  if(tap == 0) {
    digitalWrite(pin, HIGH);
    delay(100);
    digitalWrite(pin, LOW);
    tapCounter = tapCounter-1 ;
    buttonPush(tap, tapCounter, pin);
  }
 
}

void buttonChoice(int pin) {
  digitalWrite(pin, HIGH);
  delay(1);
  digitalWrite(pin, LOW);
}

void resetAtGreen(int tap, int pin, int tapCounter) {
  if(tap == 0) {
    digitalWrite(pin, HIGH);
    delay(100);
    digitalWrite(pin, LOW);
    tapCounter = 0;//reset by setting tapCounter equal to zero
  }
 }

void buttonPush(int tap, int tapCounter, int pin) {//Code that runs when a button is pressed

tap = digitalRead(button);//I don't think this code needs tap as a parameter because
Serial.print(tap);//        it's already declared and initialized here
if(tap == 1) {
 if(tapCounter == 1) {
  buttonChoice(green1);
 } else if(tapCounter == 2) {
  buttonChoice(yellow1);
 } else if(tapCounter == 3) {
 
  buttonChoice(red);
  tone(buzzer, 261, 100); I think the buzzer should go off only if you win
 } else if(tapCounter == 4) {
  buttonChoice(yellow2);
 } else if(tapCounter == 5) {
  buttonChoice(green2);
  } else if(tapCounter == 6){
    buttonChoice(blue2);
 } else if(tapCounter == 0) {
  buttonChoice(blue1);
 }
 
}//if(tapCounter == 1)
}//void button()





