// debouncing library
#include <Bounce2.h>
#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioPlaySdWav           playSdWav1;     //xy=177,159
AudioOutputI2S           i2s1;           //xy=363,158
AudioConnection          patchCord1(playSdWav1, 0, i2s1, 0);
AudioConnection          patchCord2(playSdWav1, 1, i2s1, 1);
AudioControlSGTL5000     sgtl5000_1;     //xy=369,247
// GUItool: end automatically generated code

// SD CARD variables
#define SDCARD_CS_PIN    10
#define SDCARD_MOSI_PIN  11  
#define SDCARD_SCK_PIN   13  


int bounce_pin = 14;
int led_state = LOW;

Bounce pushButton = Bounce();


void setup() {
  // put your setup code here, to run once:
  AudioMemory(10);
  // set up the hardware
  sgtl5000_1.enable();
  sgtl5000_1.volume(0.8);

  // set up SD CARD
  SPI.setMOSI(SDCARD_MOSI_PIN);
  SPI.setSCK(SDCARD_SCK_PIN);
  if (!(SD.begin(SDCARD_CS_PIN))) {
    // stop here, but print a message repetitively
    while (1) {
      Serial.println("Unable to access the SD card");
      delay(500);
    }
  }

  pushButton.attach(bounce_pin, INPUT);
  pushButton.interval(5);
  pinMode(14, INPUT);
}

float mapfloat(float x, float in_min, float in_max, float out_min, float out_max)
{
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

void playFile(const char *filename)
{
  // Start playing the file.  This sketch continues to
  // run while the file plays.
  playSdWav1.play(filename);

  // A brief delay for the library read WAV info
  delay(25);

  // Simply wait for the file to finish playing.
  while (playSdWav1.isPlaying()) {
    float vol = mapfloat(analogRead(A2), 0, 1023, 0.0, 1.0);
    sgtl5000_1.volume(vol);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  pushButton.update();

  if(pushButton.changed()){
    if(pushButton.read() == LOW){
      playFile("SDCARD_1.WAV");
    }
  }
}


