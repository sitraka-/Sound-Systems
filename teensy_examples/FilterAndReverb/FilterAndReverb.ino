#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioSynthWaveform       waveform1;      //xy=87,206
AudioFilterLadder        ladder1;        //xy=141,63
AudioEffectFreeverb      freeverb1;      //xy=283,125
AudioOutputI2S           i2s1;           //xy=382,208
AudioConnection          patchCord1(waveform1, 0, ladder1, 0);
AudioConnection          patchCord2(ladder1, freeverb1);
AudioConnection          patchCord3(freeverb1, 0, i2s1, 0);
AudioConnection          patchCord4(freeverb1, 0, i2s1, 1);
AudioControlSGTL5000     sgtl5000_1;     //xy=393,281
// GUItool: end automatically generated code


void setup() {
  // put your setup code here, to run once:
  AudioMemory(10);
  // set up the hardware
  sgtl5000_1.enable();
  sgtl5000_1.volume(0.8);

  // set up our waveform object
  waveform1.frequency(440);
  waveform1.amplitude(1.0);
  waveform1.begin(WAVEFORM_SAWTOOTH);

  freeverb1.roomsize(0.7);
  freeverb1.damping(0.1);

}

float mapfloat(float x, float in_min, float in_max, float out_min, float out_max)
{
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

void loop() {
  // put your main code here, to run repeatedly:
  float HZ = mapfloat(analogRead(A0), 0, 1023, 20.0, 2000.0);
  waveform1.frequency(HZ);

  float cutoffFilter = mapfloat(analogRead(A2), 0, 1023, 20.0, 2000.0);
  ladder1.frequency(cutoffFilter);

  float resonance = mapfloat(analogRead(A3), 0, 1023, 0.0, 1.0);
  ladder1.resonance(resonance);
}