int tapCounter = 0;
int tap = 0;

void setup(){
Serial.begin(9600);
pinMode(13,OUTPUT);//blue
pinMode(12,OUTPUT);//green
pinMode(11,OUTPUT);//yellow
pinMode(10,OUTPUT);//red
pinMode(9,OUTPUT);//yellow
pinMode(8,OUTPUT);//green
pinMode(6,OUTPUT);//blue
pinMode(4,INPUT);//button
pinMode(2, OUTPUT);//buzzer
}
void loop(){
blueOne(); button(); greenOne();
button(); yellowOne(); button();
red(); button(); yellowTwo();
button(); greenTwo(); button();
blueTwo(); button(); greenThree();
button(); yellowThree(); button();
redTwo(); button(); yellowFour();
button(); greenFour(); button();
}
void blue1(){
if(tap == 0){
digitalWrite(13,HIGH);
delay(100);
digitalWrite(13,LOW);
tapCounter = tapCounter + 1;
}
}
void button(){
tap = digitalRead(4);
 Serial.print(tap);
if(tap == 1){
if(tapCounter == 1){
digitalWrite(12,HIGH);
tone(2,100,20);
delay(1);
 digitalWrite(12,LOW);
}
if(tapCounter == 2){
digitalWrite(11,HIGH);
tone(2,100,20);
delay(1);
digitalWrite(11,LOW);
}
if(tapCounter == 3){
digitalWrite(10,HIGH);
tone(2,500,20);
delay(1);
digitalWrite(10,LOW);
}
if(tapCounter == 4){
digitalWrite(9,HIGH);
tone(2,100,20);
delay(1);
digitalWrite(9,LOW);
}
if(tapCounter == 5){
digitalWrite(8,HIGH);
tone(2,100,20);
delay(1);
digitalWrite(8,LOW);
}
if(tapCounter == 6){
digitalWrite(6,HIGH);
tone(2,100,20);
delay(1);
digitalWrite(6,LOW);
}
if(tapCounter == 0){
digitalWrite(13,HIGH);
tone(2,100,20);
delay(1);
digitalWrite(13,LOW);
}
}
}
void greenOne(){
if(tap == 0){
digitalWrite(12,HIGH);
delay(100);
digitalWrite(12,LOW);
tapCounter = tapCounter + 1;
}
}
void yellowOne(){
if(tap == 0){
  digitalWrite(11,HIGH);
  delay(100);
  digitalWrite(11,LOW );
  tapCounter = tapCounter + 1;
}}
void red(){
if(tap == 0){
digitalWrite(10,  HIGH);
delay(100);
digitalWrite(10,LOW);
tapCounter = tapCounter + 1;
}
}
void yellowTwo(){
if(tap == 0){
digitalWrite(9,HIGH);
delay(100);
digitalWrite(9,LOW);
tapCounter = tapCounter + 1;
}}
void greenTwo(){
if(tap == 0){
  digitalWrite(8,HIGH);
  delay(100);
  digitalWrite(8,LOW);
  tapCounter = tapCounter + 1;
}
}
void blueTwo(){
if(tap == 0){
digitalWrite(6,HIGH);
delay(100);
digitalWrite(6,LOW);
tapCounter = tapCounter - 1;
}}
void greenThree(){
  if(tap == 0){
digitalWrite(8,HIGH);
delay(100);
digitalWrite(8,LOW);
tapCounter = tapCounter - 1;
}
}
void yellowThree(){
if(tap == 0){
digitalWrite(9,HIGH);
delay(100);
digitalWrite(9,LOW);
tapCounter = tapCounter - 1;
}
}
void redTwo(){
if(tap == 0){
digitalWrite(10,HIGH);
delay(100);
digitalWrite(10,LOW);
tapCounter = tapCounter - 1;
}
}
void yellowFour(){
if(tap == 0){
digitalWrite(11,HIGH);
delay(100);
digitalWrite(11,LOW);
tapCounter = tapCounter - 1;
}
}
void greenFour(){
if(tap == 0){
digitalWrite(12,HIGH);
delay(100);
digitalWrite(12,LOW);
tapCounter = 0;
}
}
