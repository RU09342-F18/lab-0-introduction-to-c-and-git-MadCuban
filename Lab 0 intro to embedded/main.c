/*
 * math.c
 *
 *  Created on: Sept 6, 2018
 *  Last Edited: Sept 10, 2018
 *      Author: Tiernan Cuesta
 */
#include <stdio.h>
#include <math.h>
// This program performs a number of operations onto two numbers that are input by the user.
int main(void)
{
    char Operator;
    int num1, num2;

    printf("Enter an operator (+, -, *, /, %, <, >, &, |, ^, ~:");
    scanf("%c", &Operator);     //desired operator is stored here

    printf("Enter two numbers:");
    scanf("%d %d", &num1, &num2);     //num1 and num2 are assigned their values

    switch (operator) //case statements for each function are called by their corresponding operator
    {
        case '+':
        printf("%d + %d = %d",num1, num2, num1 + num2);
        break;

        case '-':
        printf("%d - %d = %d",num1, num2, num1 - num2);
        break;

        case '*':
        printf("%d * %d = %d",num1, num2, num1 * num2);
        break;

        case '/':
        printf("%d / %d = %d",num1, num2, num1 / num2);
        break;

        case '%':
        printf("%d % %d = %d",num1, num2, num1 % num2);
        break;

        case '<':
        printf("%d < %d = %d",num1, num2, num1 << num2);
        break;

        case '>':
        printf("%d > %d = %d",num1, num2, num1 >> num2);
        break;

        case '&':
        printf("%d & %d = %d",num1, num2, num1 & num2);
        break;

        case '|':
        printf("%d | %d = %d",num1, num2, num1 | num2);
        break;

        case '^':
        printf("%d ^ %d = %d",num1, num2, num1 ^ num2);
        break;

        case '~':
        printf("%d = %d",num1, ~num1);
        break;
        //default function if operator input by user does not match any supported operator.
        default:
                    printf("Error! operator is not correct");
    }
	return 0;
}
