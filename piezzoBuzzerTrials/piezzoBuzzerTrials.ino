
//declarations
const int maxNotes = 10;

int notes[maxNotes] = {261, 277, 294, 311, 330, 349, 370, 392, 415, 440};
enum musicNotes {C, Cshrp, D, Dshrp, E, F, Fshrp, G, Gshrp, A};

int sigPin = 2;


void setup() {
  
pinMode(sigPin, OUTPUT);

}

void loop() {
 
tone(sigPin, 261);//middle C //Diff of num before
delay(1000);

tone(sigPin, 277);//C# //16
delay(1000);

tone(sigPin, 294);//D //17
delay(1000);
//                            difference of 1
tone(sigPin, 311);//D# //17
delay(1000);

tone(sigPin, 330);//E //19
delay(1000);
//                            difference of 2
tone(sigPin, 349);//F //19
delay(1000);

tone(sigPin, 370);//F#//21
delay(1000);
//                            difference of 2
tone(sigPin, 392);//G //22
delay(1000);
//                            difference of 1
tone(sigPin, 415);//G# //23
delay(1000);
//                            difference of 2
tone(sigPin, 440);//A//25
delay(1000);


//Array setup


/*
tone(sigPin, E);
delay(1000);
tone(sigPin, Dshrp);
delay(1000);
tone(sigPin, E);
delay(1000);
*/
/* Is this a correct usage of enumerations?
for(int i = 0; i < maxNotes; i++) {
  tone(sigPin, musicNotes[i]);
  delay(1000);
}

*/

//musicNotes playNote;

//for(int playNote = C; C <= A; static_cast<musicNotes>(playNotes + 1) {
  //tone(sigPin,);
  //delay(1000);
//}



}
