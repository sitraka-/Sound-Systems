![TEENSY](assets/images/audioTeensy.png)

Music programming / Digital Signal Processing with [Teensy](https://www.pjrc.com/teensy/).

> A toolkit for building streaming audio projects, featuring Polyphonic Playback, Recording, Synthesis, Analysis, Effects, Filtering, Mixing, Multiple Simultaneous Inputs & Outputs, and Flexible Internal Signal Routing.

Taken from [PJRC](https://www.pjrc.com/)'s website.

---

## INTRODUCTION

The Teensy's built-in [Audio library](https://www.pjrc.com/teensy/td_libs_Audio.html), in conjunction with compatible [audio shields](https://www.pjrc.com/store/teensy3_audio.html), offers a powerful platform for producing high-quality sound and audio processing. Teensy's Audio library provides a versatile set of tools for managing audio input and output, allowing users to create synthesisers, music players, digital signal processors (DSP), and sophisticated audio effects. The key advantage is the Teensy's ability to handle these tasks with minimal latency, ensuring that audio signals are processed and delivered in real time.

In this section, we will acquaint you with some fundamental programming concepts, but first we will guide you through the practical application of the Audio Shield.

## Teensy Audio Shield

The Audio Shield is a versatile audio processing add-on board designed to enhance the capabilities of Teensy development boards. 

| Front — Rev D2 (for Teensy 4.x series) | Back — Rev D2 (for teensy 4.x series)  |
| --- | ---- |
|![audioShieldFront](assets/images/teensy4b_audio_front.jpg)|![audioShieldBack](assets/images/teensy4b_audio_back.jpg) |

### Features
The Teensy Audio Shield is a feature-rich audio processing add-on board

* **Audio Outputs:** The shield includes a 1/8-inch (3.5mm) stereo audio jack. This headphone output is equipped with a built-in amplifier for driving headphones directly, providing a convenient way to listen to audio without the need for an external amplifier. It also includes soldering pads for stereo line-level output, labelled `LINE OUT`, which can be connected to an external audio amplifier, or other devices with line-level inputs like mixers or audio interfaces.

* **Audio Inputs:** While the shield doesn't have onboard audio input jacks, it provides dedicated pads for soldering external audio input connections. It allows you to add a microphone, through the `MIC` input, and has 2 line-level inputs, `LINE IN` for line-level input signals. This offers flexibility for various audio input sources based on your project's requirements.

* **Audio Codec Chip:** At the heart of the Audio Shield is the SGTL5000 audio codec chip. This chip, manufactured by NXP Semiconductors, is known for its high-quality audio performance. It features a 24-bit stereo DAC (Digital-to-Analog Converter) and a 24-bit stereo ADC (Analog-to-Digital Converter), offering excellent audio fidelity for both input and output.

* **Digital Signal Processor (DSP):** One of the standout features of the Teensy Audio Shield is its built-in DSP. This allows real-time audio effects processing, making it suitable for audio synthesis, filtering, equalisation, and various other audio manipulation tasks.

* **SD Card Slot:** For audio recording and playback, the shield incorporates an SD card slot. This feature lets you store and retrieve audio data from an SD card, making it suitable for sound file storage and retrieval in applications like music players or voice recorders.

### Board Compatibility
The Teensy Audio Shield is compatible with specific Teensy board models, and the choice of compatibility depends on the revision of the Teensy Audio Shield. It's essential to ensure that the shield aligns with your Teensy board to work seamlessly. Below are the compatibility details for various Teensy Audio Shield revisions:

* **Teensy Audio Shield Rev A and Rev B:** These earlier revisions of the Teensy Audio Shield were primarily designed for use with Teensy 3.x series boards, such as Teensy 3.0, 3.1, and 3.2.

* **Teensy Audio Shield Rev C and Rev D:** Rev C's are optimised for use with Teensy 3.x series boards, including Teensy 3.2. While Rev D's, are meant to be used with Teensy 4.x series boards.

* **Teensy Audio Shield Rev D2:** We will be using this revision of the Audio Shield, which is primarily designed for use with Teensy 4.x series boards, including Teensy 4.0, 4.1, and 4.2. It may not be fully compatible with Teensy 3.x series boards due to differences in pinout and voltage levels.

### Connecting the Audio Shield to the Teensy

### What's a library?

In programming, a library refers to a collection of pre-written code modules and functions that can be used by developers to simplify their programming tasks. These libraries are typically designed to perform common operations, provide specific functionality, or interact with hardware components, saving developers time and effort. 

In the context of Arduino and Teensy, libraries play a crucial role in extending the capabilities of these platforms. They offer a way to easily access and use complex hardware features or perform intricate tasks without having to write all the code from scratch. For example, Teensy's libraries provide a wealth of resources, ranging from audio processing to sensor interfacing.

### What's this Audio Library about?

Teensy's Audio Library, in particular, is a specialised library designed to facilitate real-time audio processing and synthesis on Teensy microcontrollers.  

This library simplifies tasks like creating audio synthesisers, music players, audio effects, and so on. In simplistic terms, a programming library like the Teensy Audio Library comprises a series of "objects". An object is essentially a self-contained unit of code that encapsulates data and functions, designed for specific purposes. These objects can be thought of as building blocks that you can use in your code to perform various tasks. For instance, in our context, objects represent different audio components or processors. Each object is pre-coded to carry out a particular audio function, whether it's generating waveforms, applying effects, or routing audio signals. By creating and configuring these objects, you can construct complex audio processing chains. 

Let's take as an example the **AudioSynthWaveform** object within this framework. The **AudioSynthWaveform** object is a versatile tool for generating various audio waveforms, which are fundamental for sound synthesis. This component allows you to create waveforms like sine waves, square waves, sawtooth waves, and triangle waves. 

To use it, you initialise the object by specifying the audio channel it should output to and the waveform type you want to generate. You can further configure the waveform by adjusting parameters like frequency and amplitude. Frequency determines the pitch, and amplitude controls the volume. These parameters can be modulated over time to create dynamic audio effects. Once configured, you can connect this waveform generator to other audio components using the **AudioConnection** object, allowing you to route the generated waveform to various audio effects, mixers, or outputs. 

### How do I know which object's which?

For our purpose, Teensy microcontrollers are exceptionally well-suited for real-time audio processing and sound generation due to their powerful hardware capabilities and the availability of specialised [audio libraries](https://www.pjrc.com/teensy/td_libs_Audio.html). 

Their high clock speeds and [digital signal processing](https://en.wikipedia.org/wiki/Digital_signal_processing) (DSP) capabilities make them capable of handling complex audio algorithms in real time, providing low-latency audio processing. 

Teensy boards also have dedicated [digital-to-analog converters](https://en.wikipedia.org/wiki/Digital-to-analog_converter) (DACs) and [analog-to-digital converters](https://en.wikipedia.org/wiki/Analog-to-digital_converter) (ADCs) that are optimised for high-quality audio output and input. Additionally, Teensy supports a range of [audio shields](https://www.pjrc.com/store/teensy3_audio.html) and add-ons, enabling users to create custom synthesizers, effects processors, and audio applications with ease. 

## Getting started

As mentioned in the introduction, the Arduino IDE can be, and will be used to program your Teensy board. 

### Step 1: Download the Arduino IDE

- Start by downloading the [Arduino IDE](https://www.arduino.cc/en/software) (Integrated Development Environment) from the official Arduino website.
- Make sure to Choose the 2.x.x version that matches your computer's operating system (Windows, Mac, or Linux) and run the installer and/or follow the installation instructions.

### Step 2: Add Teensy to the _Board Manager_

- Launch the Arduino IDE; Teensy's installation is made through Arduino's board manager.
- Click on `File > Preferences`. And in the `Additional boards managers URLs` field copy this link:
`https://www.pjrc.com/teensy/package_teensy_index.json`
then click `OK`

![BoardManager](assets/images/boardmanager.png)

### Step 3: Install Teensy from the _Board Manager_

- Select the Board Manager icon on the left hand side, and type `teensy` in the `Filter your search...` box.
- Click `Install`, the output tab should pop up and you should see the installing process being printed out.

![teensyInstall](assets/images/teensy_lib_install.png)


### Step 4: Connect Your Teensy Board
- Connect your Teensy board to your computer using a micro USB cable. Your computer should automatically recognise the Teensy board, and it should appear in a dropdown meny at the top of the IDE. **_Note that the Teensy board version is the Teensy 4.0_**
- Select the Teensy 4.0 board from the dropdown menu, if it isn't automatically selected, or alternatively you can select it by clicking on `Tools > Board > Teensy > Teensy 4.0`

### Step 5: Write Your First Sketch
- To test that everything is working as it should copy and paste the following code in to your arduino sketch, then save your sketch by clicking on `File > Save as`.


```
void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
}
```
- Alternatively you can access the same example, by clicking on `File > Examples > 01.Basics > Blink`. This code will result in the LED built-in the board to turn on and off every second _(or 1000 milliseconds)_.

### Step 6: Upload Your Sketch
- Click the right-pointing arrow icon (Upload) in the Arduino IDE to compile your code and upload it to your Teensy board.
- Monitor the progress bar at the bottom of the IDE, and your Teensy board should execute your program.

![teensyUpload](assets/images/uplaodSketch.png)

### What's next?
If it all went well you should have the LED on your board blinking. Now that we are up and running let's create our [first sound](FIRSTSOUND.md).

---

> # ANNEX 
> 
> ## INDEX
> 
> - [Main Syllabus](./)
> - [Introduction to Teensy](TEENSY.md)
> - [Introduction to Audio on Teensy](FIRSTSOUND.md)
> - [Audio playback with FAUST](FAUSTPLAYBACK.md)
> - [GUI with FAUST](FAUSTGUI.md)
> - [FAUST with Arduino](FAUSTARDUINO.md) 
> - [Using sensors](SENSORS.md) 
> - [Physical Modeling with FAUST](PM.md) 
> - [Timetable & Key dates](README.md#timetable--2023)
>   
## OTHER RESOURCES
>   
> - [FAUST Website](https://faust.grame.fr/)
> - [FAUST IDE](faustide.grame.fr)
> - [Teensy set up](https://www.pjrc.com/teensy/tutorial.html)
>   
## MISCELLANEOUS
>   
> - [3D mesh2faust](https://github.com/grame-cncm/faust/blob/master-dev/tools/physicalModeling/mesh2faust/README.md)
> 
## OTHER REFERENCES
> 
> - Rakotoniaina, S. & [NS-PDOS](https://www.youtube.com/@newschoolpolicyanddesignfo5504/vide) (2021),  [*Human Considerations, Speculations on Lunar Habitations*](https://www.youtube.com/watch?v=_fNXnpDgsec&t=353s&ab_channel=NewSchoolPolicyandDesignforOuterSpace). Italian Virtual Pavilion. Venice Architecture Biennale.
> - Loughridge, D. & Patteson, T. (2013),  [*Museum of imaginary musical instruments*](http://imaginaryinstruments.org/)
> - Eshun, K. (1999). _More Brilliant Than The Sun: Adventures In Sonic Fiction_. Quartet Books. ([https://monoskop.org/images/b/b2/Eshun_Kodwo_More_Brilliant_Than_the_Sun_Adventures_in_Sonic_Fiction.pdf](https://monoskop.org/images/b/b2/Eshun_Kodwo_More_Brilliant_Than_the_Sun_Adventures_in_Sonic_Fiction.pdf))
> - Anderson, R. et al. (2018, December 18), *Introduction: Speculative Anthropologies*. Society for Cultural Anthropology. ([https://culanth.org/fieldsights/introduction-speculative-anthropologies](https://culanth.org/fieldsights/introduction-speculative-anthropologies))
> - Davison-Vecchione, D. & Seeger, S. (2021). _Ursula Le Guin’s Speculative Anthropology: Thick Description, Historicity and Science Fiction_. Theory, Culture & Society. Sage Publication. ([https://journals.sagepub.com/doi/pdf/10.1177/02632764211051780](https://journals.sagepub.com/doi/pdf/10.1177/02632764211051780))
> - Kuh, A. (2015, January 14). _The Cultural Significance Of Space Exploration_. UK Space Agency. ([https://space.blog.gov.uk/2015/01/14/the-cultural-significance-of-space-exploration/](https://space.blog.gov.uk/2015/01/14/the-cultural-significance-of-space-exploration/))
> - Horniman Museum's [instrument collection](https://www.horniman.ac.uk/explore-the-collections/musical-instrument-collection/)
> - Beaudrillard, J. (1981). _Simulation And Simulacra_. Editions Galilee. ([https://archive.org/details/simulacra-and-simulation-1995-university-of-michigan-press/mode/2up](https://archive.org/details/simulacra-and-simulation-1995-university-of-michigan-press/mode/2up))

