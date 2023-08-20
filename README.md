
# Minor Arduino Projects

In these projects, I used the Arduino Uno R3, a popular microcontroller, to create practical devices for everyday life. Each project includes various hardware components alongside the Arduino, and I designed the circuits using Tinkercad.


## List of projects

**1) Traffic lights controlling system** 

**2) Anti Theft System** 

**3) Smart home appliances** 


## Anti-theft System

**Components used:**

| Components     | Usage         |
| -------------  | ------------- |
| Arduino UNO R3 | microconroller|
| PIR sensor     | (passive infrared sensor) detects the motion of objects |
| Piezo          | Buzzer - when sensor detect a movement it will produce a sound |

**How It Works:**

Imagine having a small security system that watches over your belongings. Here's how this project operates:

1)The Secret Sensor: The PIR sensor acts like a tiny observer, spotting any movements nearby. It has three pins: GND, POWER, and SIGNAL.

2)Sensing Motion: Whenever something moves within the sensor's view, it sends a special signal to the Arduino.

3)Buzzer's Voice: The Piezo Buzzer is similar to a mini-speaker. When the Arduino gets the signal that motion has been detected, it tells the Piezo Buzzer to create a sound.

4)Buzzer Alert: If anyone tries to sneak around and the sensor notices them, the buzzer makes a noise like saying, "Hey, I noticed you!"


**Circuit:**

![anti theft system](https://github.com/saiabhiramjaini/minor_arduino_projects/assets/115941546/3277eba3-543c-4148-84d4-6fc9de00d7aa)

