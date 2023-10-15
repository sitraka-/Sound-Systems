![moreinputs](assets/images/moreinputs.png)

Music programming / Digital Signal Processing with [Teensy](https://www.pjrc.com/teensy/).

---

## LIGHT DEPENDENT RESISTOR (LDR) 

In this short segment, we will swap our potentiometer for a light dependent resistor also known as [photoresistor](https://en.wikipedia.org/wiki/Photoresistor).

![LDR](assets/images/Light-Dependent-Resistor.jpg)

Although various sensors can be connected to our board, the majority of analog sensors typically operate similarly, often featuring three pins, with two for power and one for the signal. Alternatively, sensors like LDRs may possess only two pins, acting as resistors that allow more or less current to pass through as light intensity fluctuates.

![LDR](assets/images/ldr-interfacing.jpg)

As illustrated in a prior section, potentiometers can function as voltage dividers, where the wiper adjustment alters the resistance ratio, resulting in a variable value at the central terminal. However, when working with a two-pin LDR, an additional component, a resistor, is required to establish a similar circuit. In this configuration, one of the LDR pins is linked to the power source, while the second pin is connected to our analog input. Simultaneously, this same pin needs to establish a connection to the ground through the aforementioned resistor. In this manner, variations in light intensity mimic the role of the wiper, altering the resistance ratio at the analog input pin.

### Connecting to our board

Once more, in the diagram provided below, an Arduino board is depicted instead of the Teensy, but the labeling and connections adhere to the same setup. It's apparent how closely related this configuration is to the potentiometer circuit.

![LDRIN](assets/images/ldrIn.png)

Now, let's proceed to re-upload our initial drone sketch, which comprised solely the _waveform1_ object, the _I2s1_ output, and the _sgtl5000_1_ object. If the upload is successful, you should now have the ability to modulate the pitch of your drone by either exposing the LDR to light or conversely shielding it from any light source.

## PUSH BUTTON — BASIC DIGITAL INPUT

## [WHAT'S NEXT?](MOREINPUTS.md)
In the following segment, we will look at using [push buttons, light and sound as inputs](MOREINPUTS.md).

---

> # ANNEX 
> 
> ## INDEX
> 
> - [Main Syllabus](./)
> - [Introduction to Teensy](TEENSY.md)
> - [Audio on Teensy](FIRSTSOUND.md)
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

