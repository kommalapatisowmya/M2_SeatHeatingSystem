# Seat Heating System
## Introduction:
The Seat heating method is commonly used to control the temperature. A heating element, which is a long strip of material that acts as a resistor, is used to power heated seats. A resistor is a device that blocks the flow of electricity. When electricity passes through it, the energy is converted to heat, which then passes through the seat and warms the riderThe heater can be turned on by the system. The temperature sensor keeps track of the temperature and sends the analogue value to the microcontroller. The microprocessor interprets the temperature sensor's analogue input and outputs a temperature reading via serial connection. The actions of the control system are totally controlled by an Atmega328 microprocessor. In this project the work is illustrated using SimulIDE software simulation and the functionality of the heat control system is coded in embedded C.

## Research:
The design of a seat heating system is more complex and sophisticated than one might expect. Seat heating systems today are significantly more complex than simple heating components found in blankets and cushions used in the home. Cadillac first offered seat warmers in 1966 to deal alleviate backaches. Car seat warmers, which heat up the seat at the push of a button, are available in some automobiles. The buttons are usually found on the side of the driver's and passenger's doors. Only the bottom of the seat heats up in some vehicles, whereas the bottom and back warm up in others. Heated seats, sometimes known as seat heaters, were once only seen in luxury or high-end vehicles; however, heated seat systems are now used in a wide range of vehicle classes. Many vehicle models have it as an option or as part of a winter package. Furthermore, several electric car manufacturers include it as a standard feature in their vehicles. Seat heaters are offered as an internal device built into the seat, often known as a heated seat, or as an external device in the form of a pad or cushion. External systems are sold as kits in the independent aftermarket.The entire market for automobile seat warmer will benefit from rising sales of passenger cars with seat heaters. Additionally, owners whose vehicles do not come equipped with a seat heater opt to install it aftermarket, benefiting seat heater aftermarket sales.

## Components used
## ATMEGA 328:
ATmega328 is an Advanced Virtual RISC (AVR) microcontroller. It supports 8-bit data processing. ATmega-328 has 32KB internal flash memory. Atmel's ATmega328 is a single-chip microcontroller that belongs to the megaAVR series. It is powered by an 8-bit Atmel AVR CPU and has flash memory and a variety of peripherals. The controllers can work on their own after programming, as long as they have electricity and a quartz crystal with a high clock speed.
## Pin Diagram:
![164730429-f6af309d-f4c5-47cb-b5c7-9ec6482e8f42](https://user-images.githubusercontent.com/101501471/164759216-c9aadfea-1e10-4cad-a9de-849840678f2b.jpg)
## Temperature Sensor:
A temperature sensor is a device that measures the temperature of an object. This can be the temperature of the air, the temperature of a liquid, or the temperature of a solid. Temperature sensors come in a variety of shapes and sizes, and they all monitor temperature using different technologies and principles.
The coolness or hotness of an entity is measured by the temperature sensor. The voltage read across the diode is what makes the sensor work. When the voltage is increased, the temperature rises and the voltage between the emitter and base transistor terminals decreases. The sensor saves that information. The device generates an analogue signal that is directly proportional to the temperature if the difference in voltage is amplified.
## Thermostat:
A thermostat sensor is a component in central AC systems that is designed to measure the ambient air temperature. It works in conjunction with a thermostat to provide control over your temperature and it is a regulating device component which senses the temperature of a physical system and performs actions so that the system's temperature is maintained near a desired setpoint. To maintain the proper temperature, a thermostat switches heating or cooling devices on or off, or regulates the flow of a heat transfer fluid as needed. In applications ranging from ambient air management to automobile coolant control, a thermostat is frequently the primary control device for a heating or cooling system. Any device or system that heats or cools to a setpoint temperature uses a thermostat.his device to detect temperature changes for the purpose of maintaining the temperature of an enclosed area essentially constant.

To maintain the proper temperature, a thermostat switches heating or cooling devices on or off, or regulates the flow of a heat transfer fluid as needed. In applications ranging from ambient air management to automobile coolant control, a thermostat is frequently the primary control device for a heating or cooling system. Any device or system that heats or cools to a setpoint temperature uses a thermostat.
## Heater core:
A heater core is a radiator-like device used to heat a vehicle's cabin. Hot coolant from the vehicle's engine is routed through the core's winding tube, which acts as a heat exchanger between the coolant and the cabin air. Fins attached to the core tubes increase the surface area for heat transfer to air forced past them by a fan, thus heating the passenger compartment. Device may use a heater core , where different amounts of coolant flow through the heater core on either side to obtain the desired heating.

## LCD ( liquid crystal display):
Liquid Crystal Display (LCD) is an electronic device, which is frequently used in many applications for displaying the information in a text or image format. It is a type of flat panel display which uses liquid crystals in its primary form of operation. LEDs have a large and varying set of use cases for consumers and businesses

## LED (Light-emitting diode):
The lighting emitting diode is a p-n junction diode. It is a specially doped diode and made up of a special type of semiconductors. When the light emits in the forward biased, then it is called a light-emitting diode.

# Software used:
SimulIDE
GCC Compiler for AVR
VS Code
# Diagram:
## Block diagram:
![157247932-77d6eee0-bb4d-4d2b-b994-35d98804d4c7](https://user-images.githubusercontent.com/101501471/164759760-9a4b6d14-d57d-4dd1-910e-ba680fc3fc77.jpg)
## Flowchart:
![157248447-38aed9de-2b5c-42a0-89b0-6bb489c2c1f3](https://user-images.githubusercontent.com/101501471/164759874-f9fc531a-c76f-4322-b0c2-e3ed6cbecce9.png)
# Requirements:
## High Level Requirements:
|  ID  |                                               Description                                               |
|:----:|:-------------------------------------------------------------------------------------------------------:|
| HLR1 | Make sure that the temperature sensor is working properly.                                              |
| HLR2 | Examine the temperature value                                                                           |
| HLR3 | When a person sits in the seat, the heater will automatically turn on.                                  |
| HLR4 | The first LED illuminates when the both switches are closed, signalling that heater has been activated. |
## Low Level Requirements:
|  ID  |                         Description                         |
|:----:|:-----------------------------------------------------------:|
| LLR1 | Analyze that the coolant level is low or not.               |
| LLR2 | Examine that power supply is running through system         |
| LLR3 | Check the temperature is display on the the serial monitor. |
| LLR4 | Check all functions working properly in system.             |

# SWOT Analysis:
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
## Functionality:
When the two switches are closed, the first LED glows indicating the actuation of the system and the heater.
Next the analog input from the temperature sensor is received and digitized.
The digitized temperature input is visualized using Pulse Width Modulation.
The corresponding temperature values based on the digitized temperature input is transmitted by the UART protocol. Here the data is displayed on the serial monitor.
## Benefits:
Seats that employ a single component to heat and cool the seat are a novel feature. Because of the system's intricacy, all functions are computer controlled. This implies that diagnostics and repairs are more comprehensive. This, however, implies that DTCs may be set if there are any faults. To get these error codes and identify any problems, a scan tool will be necessary.
Heated seats may make automobiles much more pleasant in the winter or for individuals who get chilly easily even in the summer. Most vehicles' heaters work well, but the seat warmer in the car is closer to your body, allowing you to warm up faster. In rare circumstances, the seat warms up faster than the rest of the car.
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

## Conclusion:
Heating seats are quite pleasant for those who live in colder areas, and they help both the driver and the passenger enjoy the winter journey. The heating system is especially beneficial to the elderly since it enhances physical comfort during lengthy journeys. This innovation is about a heated seat for automobiles, more especially a heated car seat for passenger vehicles. Automobile manufacturers frequently employ synthetic materials in the upholstery of car seats. Such textiles are rather chilly in cold climates, especially when the automobile is left outside for lengthy periods of time during the winter. In addition, the owner protects the fabric of the automobile seats with a plastic seat cover. The plastic covering adds to the passenger's discomfort. The heated chairs that have been available thus far have consumed a significant amount of power.This is a big disadvantage since automobiles have a limited supply of such energy.
