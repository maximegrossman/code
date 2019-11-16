/************************************************
 * filename: module3exercise4.c
 * Exercise: Module 3, Exercise 4
 * Name: Maxime Grossman
 * Date Created: March 15, 2019
 *
 * Description: This program reads input and counts newlines, spaces, and other characters.
 *************************************************/

#include<stdio.h>
int main(void)
#define STOP '#'   //our stopping character
#define SPACE ' '  //define a space for later usage
{
	char ch;
	int spaces = 0;      //spaces
 	int newlines = 0;   //newlines
	int characters = 0;   //all other characters

	printf("Please enter some input, and enter a # symbol at the end.\n");   //prompt for input

	ch = getchar();   //scan character input and assign to ch 

	while (ch != STOP) //enter loop as long as ch is not a #
	{
		if (ch == SPACE)
			spaces++;    //add 1 count to spaces if space detected
		else if (ch == '\n')  // forward-slash n is a newline symbol
			newlines++;   //add 1 count to newlines if a newline detected
		else
			characters++;  //if a space nor newline is detected, add 1 count to characters
						//... characters is a catch-all for all other characters besides newline or space

		ch = getchar();   //reads next characters, re-enter while loop as long as it's not a # symbol
	}

	printf("Number of spaces: %d\n", spaces);    //gives results
	printf("Number of newlines: %d\n", newlines);   //gives results
	printf("Number of all other characters: %d\n", characters);   //gives results

	system("pause");

	return 0;
}
