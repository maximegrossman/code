/************************************************
	* filename: mod6ex3.c
	* Assignment: Module 6, Exercise 3
	* Name: Maxime Grossman
	* Date Created: June 24, 2020
	*
	* Write a program that prompts the user for a filename. 
	* The program then opens the file and counts the number of all characters, 
	* spaces and newlines in the file and outputs the results to the user.

	*************************************************/
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	FILE *fp;
	char filename[100];
	char ch;
	int linecount, wordcount, charcount;

	// Initialize counter variables
	linecount = 0;
	wordcount = 0;
	charcount = 0;

	// Prompt user to enter filename
	printf("Enter a filename :");
	gets(filename);

	// Open file in read-only mode
	fp = fopen(filename, "r");

	// If file opened successfully, then write the string to file
	if (fp)
	{
		//Repeat until End Of File character is reached.	
		while ((ch = getc(fp)) != EOF) {
			// Increment character count if NOT new line or space
			if (ch != ' ' && ch != '\n') { ++charcount; }

			// Increment word count if new line or space character
			if (ch == ' ' || ch == '\n') { ++wordcount; }

			// Increment line count if new line character
			if (ch == '\n') { ++linecount; }
		}

		if (charcount > 0) {
			++linecount;
			++wordcount;
		}
	}
	else
	{
		printf("Failed to open the file\n");
	}

	printf("Lines : %d \n", linecount);
	printf("Words : %d \n", wordcount);
	printf("Characters : %d \n", charcount);

	getchar();
	return(0);
}