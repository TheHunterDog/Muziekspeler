
// Start define notes
#define NOTE_B0 31
#define NOTE_C1 33
#define NOTE_CS1 35
#define NOTE_D1 37
#define NOTE_DS1 39
#define NOTE_E1 41
#define NOTE_F1 44
#define NOTE_FS1 46
#define NOTE_G1 49
#define NOTE_GS1 52
#define NOTE_A1 55
#define NOTE_AS1 58
#define NOTE_B1 62
#define NOTE_C2 65
#define NOTE_CS2 69
#define NOTE_D2 73
#define NOTE_DS2 78
#define NOTE_E2 82
#define NOTE_F2 87
#define NOTE_FS2 93
#define NOTE_G2 98
#define NOTE_GS2 104
#define NOTE_A2 110
#define NOTE_AS2 117
#define NOTE_B2 123
#define NOTE_C3 131
#define NOTE_CS3 139
#define NOTE_D3 147
#define NOTE_DS3 156
#define NOTE_E3 165
#define NOTE_F3 175
#define NOTE_FS3 185
#define NOTE_G3 196
#define NOTE_GS3 208
#define NOTE_A3 220
#define NOTE_AS3 233
#define NOTE_B3 247
#define NOTE_C4 262
#define NOTE_CS4 277
#define NOTE_D4 294
#define NOTE_DS4 311
#define NOTE_E4 330
#define NOTE_F4 349
#define NOTE_FS4 370
#define NOTE_G4 392
#define NOTE_GS4 415
#define NOTE_A4 440
#define NOTE_AS4 466
#define NOTE_B4 494
#define NOTE_C5 523
#define NOTE_CS5 554
#define NOTE_D5 587
#define NOTE_DS5 622
#define NOTE_E5 659
#define NOTE_F5 698
#define NOTE_FS5 740
#define NOTE_G5 784
#define NOTE_GS5 831
#define NOTE_A5 880
#define NOTE_AS5 932
#define NOTE_B5 988
#define NOTE_C6 1047
#define NOTE_CS6 1109
#define NOTE_D6 1175
#define NOTE_DS6 1245
#define NOTE_E6 1319
#define NOTE_F6 1397
#define NOTE_FS6 1480
#define NOTE_G6 1568
#define NOTE_GS6 1661
#define NOTE_A6 1760
#define NOTE_AS6 1865
#define NOTE_B6 1976
#define NOTE_C7 2093
#define NOTE_CS7 2217
#define NOTE_D7 2349
#define NOTE_DS7 2489
#define NOTE_E7 2637
#define NOTE_F7 2794
#define NOTE_FS7 2960
#define NOTE_G7 3136
#define NOTE_GS7 3322
#define NOTE_A7 3520
#define NOTE_AS7 3729
#define NOTE_B7 3951
#define NOTE_C8 4186
#define NOTE_CS8 4435
#define NOTE_D8 4699
#define NOTE_DS8 4978
#define REST 0
// end define notes
// Start define pins
#define PezioDigital 13
#define NEXTSONGBUTT 12
#define PREVSONGBUTT 11
#define LDR A1
#define POT A0
#define OFFLED 9
#define ONLED 10
#define ldrTreshold 20
#define SevenA 4
#define SevenB 6
#define SevenC 8
#define SevenD 7
#define SevenE 5
#define SevenF 3
#define SevenG 2
// end define pins
// Start initialize songs
int song1[] = {

    // At Doom's Gate (E1M1)
    // Score available at https://musescore.com/pieridot/doom

    NOTE_E2,
    8,
    NOTE_E2,
    8,
    NOTE_E3,
    8,
    NOTE_E2,
    8,
    NOTE_E2,
    8,
    NOTE_D3,
    8,
    NOTE_E2,
    8,
    NOTE_E2,
    8, //1
    NOTE_C3,
    8,
    NOTE_E2,
    8,
    NOTE_E2,
    8,
    NOTE_AS2,
    8,
    NOTE_E2,
    8,
    NOTE_E2,
    8,
    NOTE_B2,
    8,
    NOTE_C3,
    8,
    NOTE_E2,
    8,
    NOTE_E2,
    8,
    NOTE_E3,
    8,
    NOTE_E2,
    8,
    NOTE_E2,
    8,
    NOTE_D3,
    8,
    NOTE_E2,
    8,
    NOTE_E2,
    8,
    NOTE_C3,
    8,
    NOTE_E2,
    8,
    NOTE_E2,
    8,
    NOTE_AS2,
    -2,

    NOTE_E2,
    8,
    NOTE_E2,
    8,
    NOTE_E3,
    8,
    NOTE_E2,
    8,
    338

};
int song2[] = {

    // Bloody Tears, from Castlevania II
    // Arranged by Bobby Lee. THe flute part was used
    // https://musescore.com/user/263171/scores/883296

    //B-flat major Bb Eb
    REST, 4, NOTE_G5, 4,
    NOTE_A5, 4, NOTE_AS5, 4,
    NOTE_A5, 4, NOTE_F5, 4,
    NOTE_A5, 4, NOTE_G5, 4,
    REST, 4, NOTE_G5, 4,
    NOTE_A5, 4, NOTE_AS5, 4,
    NOTE_C6, 4, NOTE_AS5, 4,

    NOTE_A5, 4, NOTE_G5, 4, //8
    338};

int song3[] = {

    // Pink Panther theme
    // Score available at https://musescore.com/benedictsong/the-pink-panther
    // Theme by Masato Nakamura, arranged by Teddy Mason

    REST,
    2,
    REST,
    4,
    REST,
    8,
    NOTE_DS4,
    8,
    NOTE_E4,
    -4,
    REST,
    8,
    NOTE_FS4,
    8,
    NOTE_G4,
    -4,
    REST,
    8,
    NOTE_DS4,
    8,
    NOTE_E4,
    -8,
    NOTE_FS4,
    8,
    NOTE_G4,
    -8,
    NOTE_C5,
    8,
    NOTE_B4,
    -8,
    NOTE_E4,
    8,
    NOTE_G4,
    -8,
    NOTE_B4,
    8,
    NOTE_AS4,
    2,
    NOTE_A4,
    -16,
    NOTE_G4,
    -16,
    NOTE_E4,
    -16,
    NOTE_D4,
    -16,
    NOTE_E4,
    2,
    REST,
    4,
    REST,
    8,
    NOTE_DS4,
    4,

    NOTE_E4,
    -4,
    REST,
    8,
    NOTE_FS4,
    8,
    NOTE_G4,
    -4,
    REST,
    8,
    NOTE_DS4,
    8,
    NOTE_E4,
    -8,
    NOTE_FS4,
    8,
    NOTE_G4,
    -8,
    NOTE_C5,
    8,
    NOTE_B4,
    -8,
    NOTE_G4,
    8,
    NOTE_B4,
    -8,
    NOTE_E5,
    8,
    NOTE_DS5,
    1,
    NOTE_D5,
    2,
    REST,
    4,
    REST,
    8,
    NOTE_DS4,
    8,
    NOTE_E4,
    -4,
    REST,
    8,
    NOTE_FS4,
    8,
    NOTE_G4,
    -4,
    REST,
    8,
    NOTE_DS4,
    8,
    NOTE_E4,
    -8,
    NOTE_FS4,
    8,
    NOTE_G4,
    -8,
    NOTE_C5,
    8,
    NOTE_B4,
    -8,
    NOTE_E4,
    8,
    NOTE_G4,
    -8,
    NOTE_B4,
    8,

    NOTE_AS4,
    2,
    NOTE_A4,
    -16,
    NOTE_G4,
    -16,
    NOTE_E4,
    -16,
    NOTE_D4,
    -16,
    NOTE_E4,
    -4,
    REST,
    4,
    REST,
    4,
    NOTE_E5,
    -8,
    NOTE_D5,
    8,
    NOTE_B4,
    -8,
    NOTE_A4,
    8,
    NOTE_G4,
    -8,
    NOTE_E4,
    -8,
    NOTE_AS4,
    16,
    NOTE_A4,
    -8,
    NOTE_AS4,
    16,
    NOTE_A4,
    -8,
    NOTE_AS4,
    16,
    NOTE_A4,
    -8,
    NOTE_AS4,
    16,
    NOTE_A4,
    -8,
    NOTE_G4,
    -16,
    NOTE_E4,
    -16,
    NOTE_D4,
    -16,
    NOTE_E4,
    16,
    NOTE_E4,
    16,
    NOTE_E4,
    2,
    338};

int song4[] = {

    //Based on the arrangement at https://www.flutetunes.com/tunes.php?id=169

    NOTE_AS4, -2, NOTE_F4, 8, NOTE_F4, 8, NOTE_AS4, 8, //1
    NOTE_GS4, 16, NOTE_FS4, 16, NOTE_GS4, -2,
    NOTE_AS4, -2, NOTE_FS4, 8, NOTE_FS4, 8, NOTE_AS4, 8,
    NOTE_A4, 16, NOTE_G4, 16, NOTE_A4, -2,
    REST, 1,

    NOTE_AS4, 4, NOTE_F4, -4, NOTE_AS4, 8, NOTE_AS4, 16, NOTE_C5, 16, NOTE_D5, 16, NOTE_DS5, 16, //7
    NOTE_F5, 2, NOTE_F5, 8, NOTE_F5, 8, NOTE_F5, 8, NOTE_FS5, 16, NOTE_GS5, 16,
    NOTE_AS5, -2, NOTE_AS5, 8, NOTE_AS5, 8, NOTE_GS5, 8, NOTE_FS5, 16,
    NOTE_GS5, -8, NOTE_FS5, 16, NOTE_F5, 2, NOTE_F5, 4,

    NOTE_DS5, -8, NOTE_F5, 16, NOTE_FS5, 2, NOTE_F5, 8, NOTE_DS5, 8, //11
    NOTE_CS5, -8, NOTE_DS5, 16, NOTE_F5, 2, NOTE_DS5, 8, NOTE_CS5, 8,
    NOTE_C5, -8, NOTE_D5, 16, NOTE_E5, 2, NOTE_G5, 8,
    NOTE_F5, 16, NOTE_F4, 16, NOTE_F4, 16, NOTE_F4, 16, NOTE_F4, 16, NOTE_F4, 16, NOTE_F4, 16, NOTE_F4, 16, NOTE_F4, 8, NOTE_F4, 16, NOTE_F4, 8,

    NOTE_AS4, 4, NOTE_F4, -4, NOTE_AS4, 8, NOTE_AS4, 16, NOTE_C5, 16, NOTE_D5, 16, NOTE_DS5, 16, //15
    NOTE_F5, 2, NOTE_F5, 8, NOTE_F5, 8, NOTE_F5, 8, NOTE_FS5, 16, NOTE_GS5, 16,
    NOTE_AS5, -2, NOTE_CS6, 4,
    NOTE_C6, 4, NOTE_A5, 2, NOTE_F5, 4,
    NOTE_FS5, -2, NOTE_AS5, 4,
    NOTE_A5, 4, NOTE_F5, 2, NOTE_F5, 4,

    NOTE_FS5, -2, NOTE_AS5, 4,
    NOTE_A5, 4, NOTE_F5, 2, NOTE_D5, 4,
    NOTE_DS5, -2, NOTE_FS5, 4,
    NOTE_F5, 4, NOTE_CS5, 2, NOTE_AS4, 4,
    NOTE_C5, -8, NOTE_D5, 16, NOTE_E5, 2, NOTE_G5, 8,
    NOTE_F5, 16, NOTE_F4, 16, NOTE_F4, 16, NOTE_F4, 16, NOTE_F4, 16, NOTE_F4, 16, NOTE_F4, 16, NOTE_F4, 16, NOTE_F4, 8, NOTE_F4, 16, NOTE_F4, 8, 338};
int song5[] = {

    // Keyboard cat
    // Score available at https://musescore.com/user/142788/scores/147371

    REST,
    1,
    REST,
    1,
    NOTE_C4,
    4,
    NOTE_E4,
    4,
    NOTE_G4,
    4,
    NOTE_E4,
    4,
    NOTE_C4,
    4,
    NOTE_E4,
    8,
    NOTE_G4,
    -4,
    NOTE_E4,
    4,
    NOTE_A3,
    4,
    NOTE_C4,
    4,
    NOTE_E4,
    4,
    NOTE_C4,
    4,
    NOTE_A3,
    4,
    NOTE_C4,
    8,
    NOTE_E4,
    -4,
    NOTE_C4,
    4,
    NOTE_G3,
    4,
    NOTE_B3,
    4,
    NOTE_D4,
    4,
    NOTE_B3,
    4,
    NOTE_G3,
    4,
    NOTE_B3,
    8,
    NOTE_D4,
    -4,
    NOTE_B3,
    4,
    338

};
// Stop initialize songs
int *songs[] = {
    song1, song2, song3, song4, song5};

int songNum = 0;

void nextSong()
{
  if (songNum != 5)
  {
    songNum++;
  }
}

void prevSong()
{
  if (songNum != 0)
  {
    songNum--;
  }
}

void stopSong()
{
  noTone(PezioDigital);
}

// initialize vars with default values
int tempo = 160;
int wholenote = (60000 * 4) / tempo;
bool playing = true;
int note = 0;
int noteDuration;
int pauseBetweenNotes;
unsigned long newtime = millis();
unsigned long oldtime;
bool nexNote = true;
bool press = false;

void resetvars()
{
  playing = true;
  note = 0;
  noteDuration;
  pauseBetweenNotes;
  newtime = millis();
  nexNote = true;
}

void printNumber(int number[], int size, bool state)
{

  for (int i = 0; i < size; i++)
  {
    digitalWrite(number[i], state);
  }
}
// initialize all visible numbers for the seven segmentdisplay
int numbers[][7] = {
    {SevenA, SevenB, SevenC, SevenD, SevenE, SevenF}, // 0,
    {SevenF, SevenE},                                 // 1,
    {SevenA, SevenB, SevenG, SevenE, SevenD},         // 2,
    {SevenA, SevenB, SevenG, SevenC, SevenD},         // 3,
    {SevenF, SevenG, SevenB, SevenC},                 // 4,
    {SevenA, SevenF, SevenG, SevenC, SevenD},         //5
};
int size;

void setup()
{
  pinMode(PezioDigital, OUTPUT);
  pinMode(NEXTSONGBUTT, INPUT);
  pinMode(PREVSONGBUTT, INPUT);
  pinMode(ONLED, OUTPUT);
  pinMode(OFFLED, OUTPUT);
  pinMode(SevenA, OUTPUT);
  pinMode(SevenB, OUTPUT);
  pinMode(SevenC, OUTPUT);
  pinMode(SevenD, OUTPUT);
  pinMode(SevenE, OUTPUT);
  pinMode(SevenF, OUTPUT);
  pinMode(SevenG, OUTPUT);
  pinMode(POT, INPUT);
  size = sizeof(numbers[songNum]) / sizeof(numbers[songNum][0]);
  printNumber(numbers[songNum], size, true);
}

void loop()
{
  tempo = analogRead(POT);
  if (tempo < 160)
  {
    tempo = 160;
  }
  if (analogRead(LDR) >= ldrTreshold)
  {
    digitalWrite(OFFLED, false);
    digitalWrite(ONLED, true);
    newtime = millis();
    if (playing)
    {
      if (songNum == 0 && playing == true)
      {
        playing = false;
      }
      if (nexNote)
      {
        wholenote = (60000 * 4) / tempo;
        if (songs[songNum - 1][note + 1] > 0)
        {
          noteDuration = wholenote / songs[songNum - 1][note + 1];
        }
        else
        {
          noteDuration = (wholenote) / abs(songs[songNum - 1][note + 1]);
          noteDuration *= 1.5;
        }
        pauseBetweenNotes = noteDuration * 0.9;
        tone(PezioDigital, songs[songNum - 1][note], noteDuration);
        nexNote = false;
      }
      if (newtime - oldtime >= pauseBetweenNotes)
      {
        stopSong();
        oldtime = newtime;
        note += 2;
        nexNote = true;
        if (songs[songNum - 1][note] == 338)
        {
          playing = false;
          nexNote = false;
          stopSong();
        }
      }
    }

    if (!press)
    {
      if (digitalRead(NEXTSONGBUTT))
      {
        size = sizeof(numbers[songNum]) / sizeof(numbers[songNum][0]);
        printNumber(numbers[songNum], size, false);
        nextSong();
        stopSong();

        size = sizeof(numbers[songNum]) / sizeof(numbers[songNum][0]);
        printNumber(numbers[songNum], size, true);
        press = true;
        resetvars();
      }
      else if (digitalRead(PREVSONGBUTT))
      {
        size = sizeof(numbers[songNum]) / sizeof(numbers[songNum][0]);
        printNumber(numbers[songNum], size, false);
        prevSong();
        stopSong();

        size = sizeof(numbers[songNum]) / sizeof(numbers[songNum][0]);
        printNumber(numbers[songNum], size, true);
        press = true;
        resetvars();
      }
    }
    else if (digitalRead(PREVSONGBUTT) == 0 && digitalRead(NEXTSONGBUTT) == 0)
    {
      press = false;
      oldtime = millis();
    }
  }
  else
  {
    digitalWrite(OFFLED, true);
    stopSong();
    digitalWrite(ONLED, false);
  }
}
