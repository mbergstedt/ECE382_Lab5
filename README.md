ECE382_Lab4
===========
##Interrupts - "Remote Control Decoding"
###Purpose
Use knowledge of interrupts and the Timer_A subsystem to reverse engineer a remote control.
###Preliminary Design
The initial information for the lab was found during the first lab day and is in the document "Day 1.docx".
###Hardware Design
The hardware for this lab is the chip connected to an IR Sensor using pin 2.6, ground, and Vcc.  A pictuer of the design is below.
![alt text](https://github.com/mbergstedt/ECE382_Lab5/blob/master/HardwareDesign.jpg?raw=true)

For A functionality, the LCD display board would be place on top of the chip.
###Debugging
The debugger was used to help figure out the code for the button presses.  For Day 1 information, I would run the debugger, press a button on my remote, and then pause the debugger.  Information would be put into the time0 and time1 variables, which corresponded to the signal that was being sent from the remote.  Through this, I discovered that my number and power buttons were not functional on my remote.  For the functionality, I used the debugger to have the program running on the chip so that when I pressed a button, one of the lights on the chip would turn on or off.
###Testing Methodology/Results
For Day 1, I ran the given code for multiple buttons to figure out the information for the buttons.  My power and number buttons provided results that made no logical sense except for if they were not working.  For my other buttons, I recorded the code that was sent from the remote for that button.  After testing multiple buttons, I noticed that each of the buttons had the same first sixteen bits, which served as a sort of notification to the chip.  I used these numbers as the values for the constants in the start5 header file.  For the functionality, I coded it so that one of the ligths would turn on when the channel up button was pushed, and off when the channel down button was pressed.  I coded the other light to do the same thing with the volume buttons.  Upon running the program, I was able to turn on either light with the button presses.
###Observations/Conclusions
The lab was a little confusing at first when I wasn't really sure what the values that I got from the button press corresponded to on the input singal.  Once I figured that out, the rest of the program was not too difficult to figure out by following the picture of the psuedocode that was given to us.  In order to get A functionality, I would have copied over the etch-a-sketch program from Assignment 8, and made slight adjustments to account for the input coming from the IR sensor instead of button presses on the LCD.
###Documentation
Dr. Coulston helped me figure out the meaning of the values input from a button press on the remote and how to turn the timer off.
