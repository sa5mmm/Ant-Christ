# Ant Christ

You're assigned a role in the colony and you have to either help save the colony or bring it to it's demise.

## Getting Started

These instructions will get you a copy of the project up and running on your local machine for development and testing purposes.

### Prerequisites

Arduino kit
2 breadboards
4 buttons
4, 10Ω resistors
plenty of wires
Arduino IDE
LiquidCrystal library
Wire.h library
USB A/B cable
LCD I2C
Cardstock

### Installing

Step 1) Install Arduino IDE v1.8.5
Step 2) Download GitHub file: https://github.com/sa5mmm/Ant-Christ/blob/master/Main%20Loop
Step 3) Upload to Arduino Sketch or copy and paste the contents into a new sketch
step 4) Download the following libraries from the following links:
		Download the Wire Library here: https://www.resistorpark.com/arduino-wire-library-download/
		Download the Liquid Display Library Here: https://www.electroschematics.com/12459/arduino-i2c-lcd-backpack-introductory-tutorial/
step 5) Enable the libraries on your sketch
step 6) Assemble the board(Refer to pictures for setup):
		Connect 4 buttons of the following colors to the Arduino from a breadboard: Red, Yellow, Green, Blue
		Connect 7 LED's of the following colors to the Arduino from a breadboard in the following order: Blue, green, yellow, red, yellow, green, blue
		Connect i2c LCD screen to the Arduino
		Connect USB A/B cable to board and insert into usb port of computer
step7) Save the file and upload the code to run
```

## Deployment

Add additional notes about how to deploy this on a live system

Four buttons are used to enter player choices into the game. Users are prompted which buttons to select. Players enter how many people are playing the game. Next, LCD screen prompts players to look at the
screen making sure that no one else is looking. Screen informs player their role in the game, ant or ant-christ. Ant-christ's role is to thwart the efforts of the ants to destroy the colony, but their identity must remain
a secret. The role of queen is assigned to players in sequential order. LCD prompts queen to select advisors to make decisions for the colony. The number of advisors is 2/3 the number of people playing (rounding down). 
An event befalls the colony once at each turn. Events are classified as good or bad. A good event brings the possibility to increase the number of ants in the colony. A bad event brings the possibility of 
decreasing the number of ants in the colony. The LCD prompts the advisors to come to the screen individually. The advisor is asked if they want the good/bad event to pass/fail. After that advisor is done making decisions,
if their are more advisors, they will be prompted by the LCD screen to come to the screen and enter their decision. Decisions should be made in private. After decisions are made, a mini game occurs. 
The queen must play the mini game. LED's light up sequentially at a speed that is determined by the advisor's decision of pass or fail. If most of the advisors wanted the good event to fail, or a bad event to pass, the sequential
 speed of the LEDs is higher, so that it's harder to hit the red LED. If most of the advisors wanted the good event to pass, or the bad event to fail, the sequential speed is slower, making it easier to hit the red LED. 

Each colored LED carries a probability of loss or gain. Blue LEDs lose 75% of the population in a bad event or gain no ants in a good event. Green LEDs lose 50% of the population in a bad event and give a 25% population 
increase in a good event. Yellow LEDs lose 25%  of the population in a bad event and increase the population by 75% in a good event. Lastly, the red LED ensures no ants are lost in a bad event and your ant colony is 
doubled in a good event.

After the mini game, the remaining amount of ants is displayed on the LCD screen and the next player can be queen, but, if the ant population reaches 0, the game is automatically won by the ant-christs.  
After everyone has been queen a winning side is determined. Any remaining ants is determined to be a win for the ants.

## Acknowledgments

* Thank you Citrus Hax for the invite. We really appreciate the space to work, all the junk and food but most importantly, all the mentors who were kind enough to sit down with us and help us through some road blocks. Couldn't have done it without you.(maybe)
