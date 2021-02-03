
/*************************************************
 Pitch values for music
 Credits: https://www.youtube.com/redirect?q=https%3A%2F%2Fwww.drive.google.com%2Fdrive%2Ffolders%2F1yH2TnQntyjxTACFiJCyzE9jY4F3DJgM0%3Fusp%3Dsharing&redir_token=sOm1FFj-ZK5Nn2zLavHViFT8Ewd8MTU4OTI3OTkyOEAxNTg5MTkzNTI4&v=nVVzBPgpCsM&event=video_description
 *************************************************/

#define NOTE_B0  31
#define NOTE_C1  33
#define NOTE_CS1 35
#define NOTE_D1  37
#define NOTE_DS1 39
#define NOTE_E1  41
#define NOTE_F1  44
#define NOTE_FS1 46
#define NOTE_G1  49
#define NOTE_GS1 52
#define NOTE_A1  55
#define NOTE_AS1 58
#define NOTE_B1  62
#define NOTE_C2  65
#define NOTE_CS2 69
#define NOTE_D2  73
#define NOTE_DS2 78
#define NOTE_E2  82
#define NOTE_F2  87
#define NOTE_FS2 93
#define NOTE_G2  98
#define NOTE_GS2 104
#define NOTE_A2  110
#define NOTE_AS2 117
#define NOTE_B2  123
#define NOTE_C3  131
#define NOTE_CS3 139
#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988
#define NOTE_C6  1047
#define NOTE_CS6 1109
#define NOTE_D6  1175
#define NOTE_DS6 1245
#define NOTE_E6  1319
#define NOTE_F6  1397
#define NOTE_FS6 1480
#define NOTE_G6  1568
#define NOTE_GS6 1661
#define NOTE_A6  1760
#define NOTE_AS6 1865
#define NOTE_B6  1976
#define NOTE_C7  2093
#define NOTE_CS7 2217
#define NOTE_D7  2349
#define NOTE_DS7 2489
#define NOTE_E7  2637
#define NOTE_F7  2794
#define NOTE_FS7 2960
#define NOTE_G7  3136
#define NOTE_GS7 3322
#define NOTE_A7  3520
#define NOTE_AS7 3729
#define NOTE_B7  3951
#define NOTE_C8  4186
#define NOTE_CS8 4435
#define NOTE_D8  4699
#define NOTE_DS8 4978

int melody[] = {
  NOTE_AS4, NOTE_AS4, NOTE_AS4, NOTE_AS4,
  NOTE_D5, NOTE_D5, NOTE_D5, NOTE_D5,
  NOTE_C5, NOTE_C5, NOTE_C5, NOTE_C5, 
  NOTE_F5, NOTE_F5, NOTE_F5, NOTE_F5, 
  NOTE_G5, NOTE_G5, NOTE_G5, NOTE_G5,
  NOTE_G5, NOTE_G5, NOTE_G5, NOTE_G5, 
  NOTE_G5, NOTE_G5, NOTE_G5, NOTE_G5, 
  NOTE_C5, NOTE_AS4, NOTE_A4, NOTE_F4,
  NOTE_G4, 0, NOTE_G4, NOTE_D5,
  NOTE_C5, 0, NOTE_AS4, 0,
  NOTE_A4, 0, NOTE_A4, NOTE_A4,
  NOTE_C5, 0, NOTE_AS4, NOTE_A4, 
  NOTE_G4,0, NOTE_G4, NOTE_AS5,
  NOTE_A5, NOTE_AS5, NOTE_A5, NOTE_AS5,
  NOTE_G4,0, NOTE_G4, NOTE_AS5,
  NOTE_A5, NOTE_AS5, NOTE_A5, NOTE_AS5,
  NOTE_G4, 0, NOTE_G4, NOTE_D5,
  NOTE_C5, 0, NOTE_AS4, 0,
  NOTE_A4, 0, NOTE_A4, NOTE_A4,
  NOTE_C5, 0, NOTE_AS4, NOTE_A4, 
  NOTE_G4,0, NOTE_G4, NOTE_AS5,
  NOTE_A5, NOTE_AS5, NOTE_A5, NOTE_AS5,
  NOTE_G4,0, NOTE_G4, NOTE_AS5,
  NOTE_A5, NOTE_AS5, NOTE_A5, NOTE_AS5
 };

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
  4,4,4,4,
  4,4,4,4,
  4,4,4,4,
  4,4,4,4,
  4,4,4,4,
  4,4,4,4,
  4,4,4,4,
  4,4,4,4,
  4,4,4,4,
  4,4,4,4,
  4,4,4,4,
  4,4,4,4,
  4,4,4,4,
  4,4,4,4,
  4,4,4,4,
  4,4,4,4,
  4,4,4,4,
  4,4,4,4,
  4,4,4,4,
  4,4,4,4,
  4,4,4,4,
  4,4,4,4,
  4,4,4,4,
  4,4,4,4,
  4,4,4,4,
  };


int lever = 12;
int hred = 6;
int hyellow = 5;
int hgreen = 3;
int vred = 11;
int vyellow = 10;
int vgreen = 9;

int green_delay = 3000;
int yellow_delay = 1000;
int red_delay = 3000;


int light = 1;
int d = 1;
int thisNote = 0;

void setup() 
{
  pinMode(lever, INPUT);  
  pinMode(hred, OUTPUT);
  pinMode(hyellow, OUTPUT);
  pinMode(hgreen, OUTPUT);
  pinMode(vred, OUTPUT);
  pinMode(vyellow, OUTPUT);
  pinMode(vgreen, OUTPUT);


  Serial.begin(9600);
}

void loop() 
{
  if(digitalRead(lever) == HIGH)
  {
    Serial.print("lever: ");
    Serial.println(digitalRead(lever));
    
    if(light == 3)
    {
      d = 0;
      Serial.println("light3");
    }

    if(light == 2)
    {
      Serial.println("light2");
    }

    if(light == 1)
    {
      d = 1;
      Serial.println("light1");
    }
      
    int noteDuration = 750 / noteDurations[thisNote];
    tone(8, melody[thisNote], noteDuration);

    switch(light)
    {
      case 1:
      digitalWrite(hred, HIGH);
      digitalWrite(vred, HIGH);
      break;
      case 2:
      digitalWrite(hyellow, HIGH);
      digitalWrite(vyellow, HIGH);
      break;
      case 3:
      digitalWrite(hgreen, HIGH);
      digitalWrite(vgreen, HIGH);
      break;
    }

    Serial.println("switch");

    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);

    noTone(8);
      
    digitalWrite(hred, LOW);
    digitalWrite(hyellow, LOW);
    digitalWrite(hgreen, LOW);
    digitalWrite(vred, LOW);
    digitalWrite(vyellow, LOW);
    digitalWrite(vgreen, LOW);

    //delay(500);

    Serial.print("low, D:");
    Serial.println(d);
      
    if(d == 1)
    {
      light = light + 1;
      Serial.println("light++");
    }
    else
    {
      light = light - 1;
    }

    Serial.print("add/minus: ");
    Serial.println(light);

    if(thisNote == 96)
    {
      thisNote = 0;
    }

    Serial.print("note: ");
    Serial.println(thisNote);
    
    thisNote++;
  }

  else
  {
    hgreen_vred();
    delay(green_delay);
    hyellow_vred();
    delay(yellow_delay);
    hred_vgreen();
    delay(red_delay);
    hred_vyellow();
    delay(yellow_delay);
  }
}

void hgreen_vred()
{
  digitalWrite(hgreen, HIGH);
  digitalWrite(hyellow, LOW);
  digitalWrite(hred, LOW);
  digitalWrite(vgreen, LOW);
  digitalWrite(vyellow, LOW);
  digitalWrite(vred, HIGH);
}

void hyellow_vred()
{
  digitalWrite(hgreen, LOW);
  digitalWrite(hyellow, HIGH);
  digitalWrite(hred, LOW);
  digitalWrite(vgreen, LOW);
  digitalWrite(vyellow, LOW);
  digitalWrite(vred, HIGH);
}

void hred_vgreen()
{
  digitalWrite(hgreen, LOW);
  digitalWrite(hyellow, LOW);
  digitalWrite(hred, HIGH);
  digitalWrite(vgreen, HIGH);
  digitalWrite(vyellow, LOW);
  digitalWrite(vred, LOW);
}

void hred_vyellow()
{
  digitalWrite(hgreen, LOW);
  digitalWrite(hyellow, LOW);
  digitalWrite(hred, HIGH);
  digitalWrite(vgreen, LOW);
  digitalWrite(vyellow, HIGH);
  digitalWrite(vred, LOW);
}
