# EXAMPLE 3

## Step 1 - Introduction

- The objective of this example is to read analog signal in **auto-trigger mode** by using AVR language.
- Requirements:-
  - Clock speed microcontroller -> 16MHz
  - Clock speed ADC -> 125MHz
  - AVCC as reference.

<details>
  <summary>
    List of components
  </summary>
  
  
  1. Arduino
  2. Potentiometer
  3. Breadboard
  4. Jumpers
</details>

[Simulation](https://www.tinkercad.com/things/fdmAd4Ia82L-esd-analoginpute3)

## Step 2 - Video

[![Example 3]()]()

## Step 3 - Wiring the Circuit

<details>
  <summary>Details</summary>
  
  <img src="/Images/ESD-AnalogInput_E1E2E3.png" width="470">  <img src="/Images/IMG_20201116_140850.jpg" width="470">
</details>

## Step 4 - Arduino Programming

[Code](https://github.com/muhdman/MCTE4342-ESD/edit/main/Week5-AnalogInput/Example_3/Example_3.ino)

## Step 5 - Conclusion

- Auto-trigger mode is the default mode to read analog signal. The value of the signal will change in real-time. 
 _The simulation may not be working same as the real life experiment due to the lack of hardware requirement in simulation._
