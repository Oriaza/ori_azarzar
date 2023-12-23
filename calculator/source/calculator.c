#include <stdio.h>

#include "C:\Users\Ori\Desktop\ori_git\calculator\header\calculator.h"
// "/home/student/Desktop/ori_git/.git/calculator/header/calculator.h"


void run_calculator(void)
{
	char expression[100];
	int result = 0;

	printf("Enter an expression: ");


	fgets(expression, sizeof(expression), stdin);
	
	

	printf(" %s\n", result);
}







void main(void)
{
	run_calculator();
	printf("this is ori branch\n");
}
