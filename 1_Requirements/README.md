# ABSTRACT
A heating system is a device that uses thermal energy to keep temperatures at a comfortable level in places such as cars,homes etc. It aids the system in raising the temperature of an enclosed room with the primary goal of assuring the occupants' comfort. The Seat Heating Control System regulates the temperature of an automobile seat. The button sensor is activated when a passenger or the driver of the car sits in the car seat (which acts as one switch). The user must next turn on the heater (which is known as the recirculation button and plays a vital function in the heat.The temperature sensors work by sensing the temperature emitted by the thermostat and/or the coolant, as well as monitoring and recording the temperature and sending the analogue value to the ATmega328 microcontroller. The temperature sensor's analogue input is fed into the microcontroller, which outputs a temperature reading via USART.
# INTRODUCTION:
The Seat heating method is commonly used to control the temperature. A heating element, which is a long strip of material that acts as a resistor, is used to power heated seats. A resistor is a device that blocks the flow of electricity. When electricity passes through it, the energy is converted to heat, which then passes through the seat and warms the riderThe heater can be turned on by the system. The temperature sensor keeps track of the temperature and sends the analogue value to the microcontroller. The microprocessor interprets the temperature sensor's analogue input and outputs a temperature reading via serial connection. The actions of the control system are totally controlled by an Atmega328 microprocessor. In this project the work is illustrated using SimulIDE software simulation and the functionality of the heat control system is coded in embedded C.
# Components used
## ATmega328:
ATmega328 is an Advanced Virtual RISC (AVR) microcontroller. It supports 8-bit data processing. ATmega-328 has 32KB internal flash memory. Atmel's ATmega328 is a single-chip microcontroller that belongs to the megaAVR series. It is powered by an 8-bit Atmel AVR CPU and has flash memory and a variety of peripherals. The controllers can work on their own after programming, as long as they have electricity and a quartz crystal with a high clock speed.
## PIN DIAGRAM:
![IC-ATMEGA328-PU-3](https://user-images.githubusercontent.com/101501471/164730429-f6af309d-f4c5-47cb-b5c7-9ec6482e8f42.jpg)
## Temperature Sensor:
A temperature sensor is a device that is designed to measure the degree of hotness or coolness in an object. The working of a temperature meter depends upon the voltage across the diode. The temperature change is directly proportional to the diode’s resistance. The cooler the temperature, lesser will be the resistance, and vice-versa.

The resistance across the diode is measured and converted into readable units of temperature (Fahrenheit, Celsius, Centigrade, etc.) and, displayed in numeric form over readout units. In geotechnical monitoring field, these temperature sensors are used to measure the internal temperature of structures like bridges, dams, buildings, power plants, etc.
## Thermostat:
A thermostat sensor is a component in central AC systems that is designed to measure the ambient air temperature. It works in conjunction with a thermostat to provide control over your temperature and it is a regulating device component which senses the temperature of a physical system and performs actions so that the system's temperature is maintained near a desired setpoint. To maintain the proper temperature, a thermostat switches heating or cooling devices on or off, or regulates the flow of a heat transfer fluid as needed. In applications ranging from ambient air management to automobile coolant control, a thermostat is frequently the primary control device for a heating or cooling system. Any device or system that heats or cools to a setpoint temperature uses a thermostat.his device to detect temperature changes for the purpose of maintaining the temperature of an enclosed area essentially constant.
## Heater core:
A heater core is a radiator-like device used in heating the cabin of a vehicle. Hot coolant from the vehicle's engine is passed through a winding tube of the core, a heat exchanger between coolant and cabin air. Fins attached to the core tubes serve to increase surface area for heat transfer to air that is forced past them by a fan, thereby heating the passenger compartment.
## LCD(Liquid Crystal Display):
Liquid Crystal Display (LCD) is an electronic device, which is frequently used in many applications for displaying the information in a text or image format. It is a type of flat panel display which uses liquid crystals in its primary form of operation. LEDs have a large and varying set of use cases for consumers and businesses
## LED(Light Emitting Diode):
The lighting emitting diode is a p-n junction diode. It is a specially doped diode and made up of a special type of semiconductors. When the light emits in the forward biased, then it is called a light-emitting diode.
## Software used:
SimulIDE

GCC Compiler for AVR

VS Code
## RESEARCH:
The design of a seat heating system is more complex and sophisticated than one might expect. Seat heating systems today are significantly more complex than simple heating components found in blankets and cushions used in the home. Cadillac first offered seat warmers in 1966 to deal alleviate backaches. Car seat warmers, which heat up the seat at the push of a button, are available in some automobiles. The buttons are usually found on the side of the driver's and passenger's doors. Only the bottom of the seat heats up in some vehicles, whereas the bottom and back warm up in others. Heated seats, sometimes known as seat heaters, were once only seen in luxury or high-end vehicles; however, heated seat systems are now used in a wide range of vehicle classes. Many vehicle models have it as an option or as part of a winter package. Furthermore, several electric car manufacturers include it as a standard feature in their vehicles. Seat heaters are offered as an internal device built into the seat, often known as a heated seat, or as an external device in the form of a pad or cushion. External systems are sold as kits in the independent aftermarket.The entire market for automobile seat warmer will benefit from rising sales of passenger cars with seat heaters. Additionally, owners whose vehicles do not come equipped with a seat heater opt to install it aftermarket, benefiting seat heater aftermarket sales.
# SWOT ANALYSIS:
## Strength:
Through thermostat sensor seat can be easily heated.
It is very useful in winter for driving .
If you spill any liquid on the heater cover, it immediately turn off the device.
In winter it takes ony few minutes to wrm the seat and car.
## Weakness:
If it is excessive use it is harmful for body.
Do not spill liquid material or wash on seats.
For this the investment is so high.
## Opportunities:
In market, the growth of this system is increased.
It is very demanding to consumers specially in cars.
## Threats:
In this system there is high electrical resistance which cause the heater pad overheat.
Sometime overheating may an issue.
It produces EMF radiation which is dangoreous for health.
# 4W and 1H:
## What:
Heating the seat may make a car considerably more comfortable in the winter. Heating mechanism that raises the temperature of the automated seat's surface to the occupants' comfort. The car's seat warmer is close to your body allowing you to warm up faster.

## When:
A heated seat is very beneficial in the winter. If you like early morning drive in winters, the early morning trip to work may be unbearably cold and uncomfortable, especially if you must sit in a freezing driver's seat.So,this feature not only offer luxurious comfort, relaxation and benefits for physical health, but also increase safety.

## Where:
Speciallyit is used in car seats. Many heated vehicle seat coverings have a temperature-control system that allows drivers to set a high or low temperature, and the heat can be turned off when the seats are not in use.

## Why:
It is so useful because it heats the seat and makes it more comfortable for both the driver and the passenger, it is great for that people or those who live in cold locations.

## How:
The longer the seat cushion is in place, the hotter it becomes. If it was left on for an extended period of time, it would get hot enough to be unpleasant or even hazardous to sit in. It has the potential to spark a fire in the cushion. Most vehicle seat warmers contain a thermostat to avoid this. The temperature in the cushion is measured by the thermostat. When it reaches a particular temperature, the thermostat transmits a signal, which automatically turns off the relay until the seat cools off somewhat. At that point, the thermostat reactivates the relay. Many seat cushions also include "high" and "low" temperature settings, allowing the driver to regulate the warmth of the seat cushions.

## Functionality:
When the two switches are closed, the first LED glows indicating the actuation of the system and the heater.
Next the analog input from the temperature sensor is received and digitized.
The digitized temperature input is visualized using Pulse Width Modulation.
The corresponding temperature values based on the digitized temperature input is transmitted by the UART protocol.Here the data is displayed on the serial monitor.

## BENEFITS:
Seats that employ a single component to heat and cool the seat are a novel feature. Because of the system's intricacy, all functions are computer controlled. This implies that diagnostics and repairs are more comprehensive. This, however, implies that DTCs may be set if there are any faults. To get these error codes and identify any problems, a scan tool will be necessary.
Heated seats may make automobiles much more pleasant in the winter or for individuals who get chilly easily even in the summer. Most vehicles' heaters work well, but the seat warmer in the car is closer to your body, allowing you to warm up faster. In rare circumstances, the seat warms up faster than the rest of the car.
# High Level Requirements:
|  ID  |                                               Description                                               |
|:----:|:-------------------------------------------------------------------------------------------------------:|
| HLR1 | Make sure that the temperature sensor is working properly.                                              |
| HLR2 | Examine the temperature value                                                                           |
| HLR3 | When a person sits in the seat, the heater will automatically turn on.                                  |
| HLR4 | The first LED illuminates when the both switches are closed, signalling that heater has been activated. |
# Low Level Requirements:
|  ID  |                         Description                         |
|:----:|:-----------------------------------------------------------:|
| LLR1 | Analyze that the coolant level is low or not.               |
| LLR2 | Examine that power supply is running through system         |
| LLR3 | Check the temperature is display on the the serial monitor. |
| LLR4 | Check all functions working properly in system.             |
