/************************************************
 * filename: module4exercise2.c
 * Exercise: Module 4, Exercise 2
 * Name: Maxime Grossman
 * Date Created: March 20, 2019
 *
 * Description: This program reads 2 doubles and prints them with a function called print_doubles.
 *************************************************/

#include<stdio.h>
void print_doubles(double, double);   //function prototype
int main(void)
{	

	double a, b;

	printf("Please enter two values of data type double.\n");   //input prompt

	if ((scanf_s("%lf %lf", &a, &b)) == 2)      //we need to validate that inputs are actually 2 doubles
		print_doubles(a, b);                 //if criteria met, call function
	else
		printf("Data type double only please!\n");   //if criteria not met, inform user that we need doubles only

	system("pause");    

	return 0;
}

void print_doubles(double a, double b)       //function definition
{
	printf("Your values are: %lf %lf.\n", a, b);    //print statement
}
