![FAUST](assets/images/teensy.png)

Music programming / Digital Signal Processing with [Teensy](https://www.pjrc.com/teensy/).

> The Teensy is a complete USB-based microcontroller development system, in a very small footprint, capable of implementing many types of [projects](https://www.pjrc.com/teensy/projects.html). All programming is done via the USB port.

Of course, here's a more detailed explanation for electronic beginners at a Master's level:

# Introduction

## What's Teensy? What about Arduino?

You have probably heard of [Arduino](https://www.arduino.cc/) before; it's a popular platform in the world of embedded electronics. At its core, an Arduino is a simple, user-friendly microcontroller development board that makes it easier for both beginners and experts to create a wide range of electronic projects. The main advantage of Arduino is its accessibility and robust community support. It's based on 8-bit ATmega microcontrollers, which are easy to use and have a broad ecosystem of add-on modules called shields. Arduino employs a simplified version of the C++ programming language, and its [integrated development environment](https://www.arduino.cc/en/software) (IDE) simplifies code writing and uploading to the board.

Now, let's delve into the Teensy platform. While it might not be as well-known as Arduino, it's a powerful alternative, especially for more complex projects. Teensy, like Arduino, is a development board, but it stands out due to its use of 32-bit ARM Cortex-M series microcontrollers. This architectural difference results in significantly higher processing power and clock speeds compared to Arduino's 8-bit platform. Teensy's performance makes it suitable for real-time applications and projects demanding extensive computational capabilities.

Both Arduino and Teensy share a commitment to open-source principles, allowing you to access their design files and libraries freely. Teensy is also programmed using the Arduino IDE but requires the [Teensyduino add-on](https://www.pjrc.com/teensy/td_download.html) for seamless integration.

Regarding hardware, both platforms offer a set of digital and analog input/output pins, making them versatile for interfacing with various sensors, actuators, and components. They are beginner-friendly, with a plethora of online tutorials and a supportive community.

In summary, when choosing between Arduino and Teensy, consider your project's computational requirements and your level of expertise. Arduino excels in simpler applications and benefits from a rich ecosystem, while Teensy's 32-bit architecture is ideal for demanding, performance-critical tasks. Many electronics enthusiasts find value in both platforms, selecting the one best suited to the specific needs of their projects.

## Why Teensy?

For our purpose, Teensy microcontrollers are exceptionally well-suited for real-time audio processing and sound generation due to their powerful hardware capabilities and the availability of specialised [audio libraries](https://www.pjrc.com/teensy/td_libs_Audio.html). 

Their high clock speeds and [digital signal processing](https://en.wikipedia.org/wiki/Digital_signal_processing) (DSP) capabilities make them capable of handling complex audio algorithms in real time, providing low-latency audio processing. 

Teensy boards also have dedicated [digital-to-analog converters](https://en.wikipedia.org/wiki/Digital-to-analog_converter) (DACs) and [analog-to-digital converters](https://en.wikipedia.org/wiki/Analog-to-digital_converter) (ADCs) that are optimised for high-quality audio output and input. Additionally, Teensy supports a range of [audio shields](https://www.pjrc.com/store/teensy3_audio.html) and add-ons, enabling users to create custom synthesizers, effects processors, and audio applications with ease. 

# Getting started

As mentioned in the introduction, the Arduino IDE can be used to program your Teensy board. 

## Step 1: Download the Arduino IDE
- Start by downloading the Arduino IDE (Integrated Development Environment) from the official Arduino website (https://www.arduino.cc/en/software).
- Choose the version that matches your computer's operating system (Windows, Mac, or Linux) and follow the installation instructions.

**Step 2: Install Teensyduino**
- Teensy is a powerful microcontroller platform that works seamlessly with the Arduino IDE through the Teensyduino add-on.
- Download Teensyduino from the PJRC website (https://www.pjrc.com/teensy/td_download.html) and follow the installation instructions for your operating system.

**Step 3: Connect Your Teensy Board**
- Obtain a Teensy board (Teensy 4.0 or Teensy 4.1 are popular choices for real-time audio and sensor projects).
- Connect your Teensy board to your computer using a USB cable. Your computer should automatically recognize the Teensy board.

**Step 4: Launch the Arduino IDE**
- Open the Arduino IDE that you installed in Step 1. With Teensyduino installed, you'll have additional board options available.

**Step 5: Select Your Teensy Board**
- In the Arduino IDE, go to "Tools" > "Board" and select your Teensy board from the list (e.g., Teensy 4.0 or Teensy 4.1).

**Step 6: Choose the Correct Port**
- Under "Tools," navigate to "Port" and select the COM port associated with your Teensy board. If you're unsure, check in the "Device Manager" on Windows or the "System Information" on macOS.

**Step 7: Write Your First Teensy Sketch**
- You can start with a simple example sketch. Teensy comes with a collection of examples to help you get started.
- To find these examples, go to "File" > "Examples" > "Teensy" in the Arduino IDE. Explore and select an example that interests you.

**Step 8: Upload Your Sketch**
- Click the right-pointing arrow icon (Upload) in the Arduino IDE to compile your code and upload it to your Teensy board.
- Monitor the progress bar at the bottom of the IDE, and your Teensy board should execute your program.

**Step 9: Explore Advanced Features**
- Teensy offers advanced features for real-time audio processing, sensor integration, and more. Take advantage of the Teensy-specific libraries and hardware to create your projects.

**Step 10: Join the Teensy Community**
- Visit the Teensy forum (https://forum.pjrc.com/) and explore the Teensyduino documentation (https://www.pjrc.com/teensy/teensyduino.html) to tap into the Teensy community's knowledge and resources.

With Arduino and Teensyduino, you have a powerful combination for creating projects that involve real-time audio processing and various sensors. Enjoy exploring the world of microcontrollers and digital making!
