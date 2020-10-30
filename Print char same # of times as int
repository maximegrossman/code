/************************************************
 * filename: module4exercise3.c
 * Exercise: Module 4, Exercise 3
 * Name: Maxime Grossman
 * Date Created: March 23, 2019
 *
 * Description: This program reads a character and an integer, and prints the character the same number of times as the integer.
 *************************************************/

#include<stdio.h>
void repeat_character(char x, int y);   //function prototype
int main(void)
{
	char x;       //for inputting character
	int y;        //for inputting integer

	printf("Please enter a character, and then an integer. Then press enter.\n");

	if (scanf_s("%c %d", &x, &y) == 2)    //must validate that one character and one integer were read
		repeat_character(x, y);           //if validated, call function
	else
		printf("Please follow instructions; enter one character and then one integer!\n");   //input this message if not validated
	
	system("pause"); 

	return 0;
}

void repeat_character(char x, int y)     //function definition
{
	for (int i = 1; i <= y; i++)       //initialize an "i" and keep printing the inputted character as long as...
		printf("%c ", x);            //... i is less than or equal to the integer
}

