/************************************************
 * filename: module2exercise2.c
 * Exercise: Module 2, Exercise 2
 * Name: Maxime Grossman
 * Date Created: Febrary 1, 2019
 *
 * Description: This program takes an input integer and prints the next 10 consecutive integers.
 *************************************************/

#include<stdio.h>
int main(void)
{
	int firstnumber;    //firstnumber is integer number entered
	printf("Please enter your favorite integer.\n");   //user inputs integer
	scanf_s("%d", &firstnumber);              //scanf picks up integer
	
	int lastnumber = firstnumber + 10;   //lastnumber is the intenger plus 10, used for looping purposed
	printf("Ok, the next 10 numbers are:\n"); 
	while (firstnumber < lastnumber)   //loops as long as firstnumber is less than lastnumber, while incrementing
	{
		firstnumber++;   //immediately increment firstnumber
		printf("%d\n", firstnumber); //print out current value of firstnumber
	}

	system("pause");
	return 0;
}