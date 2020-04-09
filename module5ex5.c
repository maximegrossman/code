
/************************************************
  * filename: module5ex5.c
  * Exercise: Module 5, Exercise 5
  * Name: Maxime Grossman
  * Date Created: March 31, 2020
  *
  * Description: This program takes an input string and prints out its reverse.
  *************************************************/

#include<stdio.h>
#include<string.h>
#define LENGTH 500
char reverse(char(*ptr), int n);
int main(void)

{
	char array[LENGTH];   //array to store sentence
	char * ptr;
	ptr = &array;
	int n, k;
	printf("Please enter a sentence.\n");

	gets(array);    //this picks up the sentence and dumps it into array
	printf("Your input was:\n");
	puts(array);  //print string array
	printf("\n");

	n = strlen(array);  //count the characters in the sentnence

	printf("Your input has %d characters, FYI.\n\n", n); //just FYI

	printf("Now we're going to print your statement backwards, starting\n");
	printf("with the last character and going to the first character.\n\n");

	reverse(ptr, n);

	system("pause \n\n");

	return 0;
}


char reverse(char(*ptr), int n)
{
	int k;
	for (k = -1; (k + n + 1) != 0; k--) {

		putchar(*(ptr + n + k));        //start printing last character and move backwards
										//STOP loop when we reach *(ptr+0) or first character	
	}

	printf("\n\n");

	return 0;
}
