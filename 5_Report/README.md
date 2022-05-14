## INTRODUCTION
Driving securely requires high level of visibility. A windshield wiper, also known as a wiper blade, is a device that cleans the front window of a car from snow, ice, washer fluid, rain and water. Wipers are fitted on all heavy motor vehicles, including cars, trucks, rail line locomotives, and some aircraft.  Safety standards for motor vehicles in adverse weather are important even at low speeds, therefore I began developing a wiper control system with arm-based microcontrollers. Rubber blades are mounted to the metal arms, while pivot magnets are mounted to the other ends. This project helps the user in their everyday lives by avoiding accidents and ensuring for secure and healthful travel. Thus, windshild wipers enhance visibility, efficiency, and reliability.
## OBJECTIVE
The main objective of this project is to design wiper control system to enhance visibility, efficiency and reliability. The goal is to prevent the accidents during the rainy season.
## RESEARCH
This wiper control system application is researched from various sources like google, youtube etc. After that, I have developed wiper control system using arm based microcontrollers.with the help ofsimulation tools 
## GOAL
- Achieving clear visibility in bad weather condition.
- Reducing accidents
## 4W's And 1H
## Who
- Everyone who needs to drive safely and with a clear view of the road.
## What
- Wiper Control System for vehicles.
## When
- When you realise the necessity of safety management and begin to take responsibility for your own health while driving in adverse weather.
## Where
- This can be utilised in daily life by the user to assess their safety and lead to better outcomes in life while travelling.
## How
- The position of the wiper is indicated by the LED, which returns to its original position after cleaning the windsheet of the vehicle.
## FEATURES
- Lock the car when button is pressed once.
- Unlock the car when button is pressed twice.
- Wiper on and it moves in clock wise direction when the button is pressed thrice.
- Wiper off and it moves in anti clock wise direction when the button is pressed four times.
## SWOT ANALYSIS:
## STRENGTH
- Clear visibility
- Single button can manage all commands
- Wiper does not stop in the middle, it goes to its original position.
- Installation is simple
## WEAKNESS
- High cost
- Replacement of wiper is required
## OPPORTUNITIES
- Reducing accidents
## THREATS
- Replaced by modern technology
## HIGH LEVEL REQUIREMENTS
| RID | DESCRIPTION | REQUIREMENT | STATUS |
| --- | --- | --- | --- |
| HLR1 |	SSD or HARD DRIVE | 1GB TO 20 GB | IMPLEMENTED |
| HLR2 |	PROGRAMMING LANGUAGE | EMBEDDED C	 | IMPLEMENTED |
| HLR3 |	OPERATING SYSTEM | WINDOWS | IMPLEMENTED |
| HLR4 |		ARM BASED MICROCONTROLLER | STM32F407VGT6 BOARD | IMPLEMENTED |
## LOW LEVEL REQUIREMENTS:
| RID |	DESCRIPTION | REQUIREMENT | STATUS |
| --- | --- | --- | --- |
| LLR1 |	PROPER SUPPLY TO PINS AND BOARD | DONE | IMPLEMENTED |
| LLR2 |	WIPER COMES TO INITIAL POSITION AFTER THE WORK | LED | IMPLEMENTED |
| LLR3 |	BUTTON FOR ACTIVATION AND DEACTIVATION OF WIPER BLADES | DONE | IMPLEMENTED |
## FLOW CHART
![FLOWCHART](https://user-images.githubusercontent.com/101622270/168106685-a7027ae9-4bc2-4520-9fee-b79776c03cfd.PNG)
## BLOCK DIAGRAM
![Block_diagram](https://user-images.githubusercontent.com/102171569/168428421-edc890c6-5553-49bf-9ab0-55f9653c6aaf.JPG)

## STRUCTURAL DIAGRAM
![structural diagram](https://user-images.githubusercontent.com/101622270/168106870-fa8b3ad1-0277-4bf0-a525-36f0a13328e3.PNG)
## BEHAVIOR DIAGRAM
![behavior diagram](https://user-images.githubusercontent.com/101622270/168106962-3ac18618-f090-45ec-9e95-5a5126ea9c4b.PNG)
## Test Plan
## Table no 1: High level test plan
Test ID | Description | Expected I/P | Expected O/P |
--------|-------------|---------|---------
H_01  | Engine ON | Press button once | Engine will ON |
H_02  | Engine OFF | Press button two times | Engine will OFF |
H_03  | Wiper ON | Press button three times | Wiper will ON |
H_04  | Wiper OFF | Press buttor four times | Wiper will OFF |
## Table no 2: Low level test plan
Test ID | Description | Expected I/P | Expected O/P |
--------|-------------|---------|---------
L_01  | Check for Engine ON | Press button one time | will ON engine |
L_02  | Check for Engine OFF | Press button two times | will OFF engine |
L_03  | Check for Wiper ON | Press button three times | will ON wiper |
L_04  | Check for Wiper OFF | Press buttor four times | will OFF wiper |
