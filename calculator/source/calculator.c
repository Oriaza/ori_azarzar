#include <stdio.h>
#include <stdlib.h> // atoi

#include "/home/student/Desktop/ori_git/calculator/header/calculator.h"


void run_calculator(void)
{
	char expression[100];
	int result = 0;

	printf("Enter an expression: ");


	fgets(expression, sizeof(expression), stdin);
	result = atoi(expression);

	if (0 == result)
    {
        printf("calculaor can only recive numbers.\n");
    }

	printf(" %d\n", result);
}


void main(void)
{
	run_calculator();
}
