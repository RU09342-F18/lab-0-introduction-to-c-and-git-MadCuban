# Lab 0: Calculator Program 
Tiernan Cuesta
Embedded Systems Section 4
September 10, 2018
#Functionality
The main.c file is a simple simulated calculator that is capable of carrying out 11 different operations. This simulation requires 3 inputs from the user interfacing with the calculator. The first input is the operator denoted in symbol form. The other two inputs are the two integers that wish to be analyzed. The resulting output from the simulation after successfuly executing the program should be an arithematic expression with a new value on the right side of the equal sign.
#Valid Inputs/Outputs
Valid inputs are two integers and an operator symbol whether it be an arithmatic or logic symbol. Valid outputs consist of a full arithematic expression or an error message because an operator was selected that this program does not support.
#Description of Code
The implementation of the main.c file was developed by first creating our 3 inputs previously stated. The arithematic for each operation was implemented inside of a switch function where different cases were called depending on the operator input from the user. For example, if the user types in + the switch function will call the addition fucntion and add the two integers also input by the user. A default function is implemented in case of an un-supported operator.
