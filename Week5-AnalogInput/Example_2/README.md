# EXAMPLE 2

## Step 1 - Introduction

- The objective of this example is to read analog signal in **on-demand mode** by using AVR language.
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

[Simulation](https://www.tinkercad.com/things/3CQZHersZRC-esd-analoginpute2)

## Step 2 - Video

[![Example 2]()]()

## Step 3 - Wiring the Circuit

<details>
  <summary>Details</summary>
  
  <img src="/Images/ESD-AnalogInput_E1E2E3.png" width="470">  <img src="/Images/IMG_20201116_140850.jpg" width="470">
</details>

## Step 4 - Arduino Programming

[Code](https://github.com/muhdman/MCTE4342-ESD/blob/main/Week5-AnalogInput/Example_2/Example_2.ino)

## Step 5 - Conclusion

- On-demand mode can only read the signal once per activation only. In order to read the signal again, the microcontroller needed to be reset or restart.
