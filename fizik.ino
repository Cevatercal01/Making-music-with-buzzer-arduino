float Speed;
#define B0  31
#define C1  33
#define CS1 35
#define D1  37
#define DS1 39
#define E1  41
#define F1  44
#define FS1 46
#define G1  49
#define GS1 52
#define A1  55
#define AS1 58
#define B1  62
#define C2  65
#define CS2 69
#define D2  73
#define DS2 78
#define E2  82
#define F2  87
#define FS2 93
#define G2  98
#define GS2 104
#define A2  110
#define AS2 117
#define B2  123
#define C3  131
#define CS3 139
#define D3  147
#define DS3 156
#define E3  165
#define F3  175
#define FS3 185
#define G3  196
#define GS3 208
#define A3  220
#define AS3 233
#define B3  247
#define C4  262
#define CS4 277
#define D4  294
#define DS4 311
#define E4  330
#define F4  349
#define FS4 370
#define G4  392
#define GS4 415
#define A4  440
#define AS4 466
#define B4  494
#define C5  523
#define CS5 554
#define D5  587
#define DS5 622
#define E5  659
#define F5  698
#define FS5 740
#define G5  784
#define GS5 831
#define A5  880
#define AS5 932
#define B5  988
#define C6  1047
#define CS6 1109
#define D6  1175
#define DS6 1245
#define E6  1319
#define F6  1397
#define FS6 1480
#define G6  1568
#define GS6 1661
#define A6  1760
#define AS6 1865
#define B6  1976
#define C7  2093
#define CS7 2217
#define D7  2349
#define DS7 2489
#define E7  2637
#define F7  2794
#define FS7 2960
#define G7  3136
#define GS7 3322
#define A7  3520
#define AS7 3729
#define B7  3951
#define C8  4186
#define CS8 4435
#define D8  4699
#define DS8 4978


#define buzzerPin 3
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Careless Whisper
    int melody[] = 
    {F6,E7,D7,A6,F6,E7,D7,A6,F6,
    C7,AS6,F6,D6,C7,AS6,F6,D6,
    AS6,A6,F6,D6,AS5,
    A5,AS5,C6,D6,E6,F6,G6,A6,
    E7,D7,A6,F6,E7,D7,A6,F6,
    C7,AS6,F6,D6,C7,AS6,F6,D6,
    AS6,A6,F6,D6,AS5,
    A5,AS5,C6,D6,E6,F6,G6,A6};
    //Careless Whisper
    int tempo[] = 
    {8,8,16,8,8,6,16,8,6,8,
    16,8,8,6,16,8,6,8,16,8,8,4,
    8,8,8,8,8,8,8,8,
    8,16,8,8,6,16,8,6,8,
    16,8,8,6,16,8,6,8,16,8,8,4,
    8,8,8,8,8,8,8,8};
    //Careless Whisper
//    Speed = 1.8;
/*/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //Megalovania
      int melody[] = 
      {D6,D6,D7,A6,GS6,0,G6,F6,D6,F6,G6,
       C6,C6,D7,A6,GS6,0,G6,F6,D6,F6,G6,
       B6,B6,D7,A6,GS6,0,G6,F6,D6,F6,G6,
       AS6,AS6,D7,A6,GS6,0,G6,F6,D6,F6,G6};
       //Megalovania
       int tempo[] = 
      {16,16,8, 8, 16,16,8,8 , 16,16 , 16,
       16,16,8, 8, 16,16,8,8 , 16,16 , 16,
       16,16,8, 8, 16,16,8,8 , 16,16 , 16,
       16,16,8, 8, 16,16,8,8 , 16,16 , 16};
       //Megalovania
//       Speed = 1.1;
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
       //Mario
  int melody[] = 
      {
  E7, E7, 0, E7,
  0, C7, E7, 0,
  G7, 0, 0,  0,
  G6, 0, 0, 0,
 
  C7, 0, 0, G6,
  0, 0, E6, 0,
  0, A6, 0, B6,
  0, AS6, A6, 0,
 
  G6, E7, G7,
  A7, 0, F7, G7,
  0, E7, 0, C7,
  D7, B6, 0, 0,
 
  C7, 0, 0, G6,
  0, 0, E6, 0,
  0, A6, 0, B6,
  0, AS6, A6, 0,
 
  G6, E7, G7,
  A7, 0, F7, G7,
  0, E7, 0,C7,
  D7, B6, 0, 0
};
//Mario
int tempo[] = {
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
 
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
 
  9, 9, 9,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
 
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
 
  9, 9, 9,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
};
//Mario
 //Speed = 1;
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Take On Me
    int melody[] = 
    {FS6,FS6,D6,B5,0,B5,0 ,E6,
     0,E6,0,E6,GS6,GS6,A6,B6,
     A6,A6,A6,E6,0,D6,0,FS6,
     0,FS6,0,FS6,E6,E6,FS6,E6
};
//Take On Me
int tempo[] = 
{8,8,8,8,8,8,8,8,
8,8,8,8,8,8,8,8,
8,8,8,8,8,8,8,8,
8,8,8,8,8,8,8,8};
//Take On Me
//Speed = 0.8;
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////*/






void setup() {
  Serial.begin(9600);
  pinMode(buzzerPin , OUTPUT);
}

void loop() {
  int size = sizeof(melody) / sizeof(int);
    for (int thisNote = 0; thisNote < size; thisNote++) {
 
      Serial.println("12");
      //quarter note = 1000 / 4, eighth note = 1000/8
      int noteDuration = Speed*(1000 / tempo[thisNote]);
 
      buzz(buzzerPin, melody[thisNote], noteDuration);
 
      int pauseBetweenNotes = noteDuration * 1.30;
      delay(pauseBetweenNotes);
 
      // stop the tone playing:
      buzz(buzzerPin, 0, noteDuration);
 
    }

}



void buzz(int pin, long fre, long len) {
  digitalWrite(13, HIGH);
  long delayVal = 1000000 / fre / 2; 
  long numCycles = fre * len / 1000; 

  
  for (long i = 0; i < numCycles; i++) {
    
    digitalWrite(pin, HIGH); 
    delayMicroseconds(delayVal); 
    digitalWrite(pin, LOW);
    delayMicroseconds(delayVal); 
  }
  digitalWrite(13, LOW);
 
}
