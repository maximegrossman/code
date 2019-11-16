/************************************************
 * filename: module3exercise5.c
 * Exercise: Module 3, Exercise 5
 * Name: Maxime Grossman
 * Date Created: March 15, 2019
 *
 * Description: This program reads a sentence, reprints it, replaces vowels with Z, and deletes spaces.
 *************************************************/

#include<stdio.h>
int main(void)
#define STOP '.'
#define SPACE ' '
{
	char ch;

	printf("Please enter a sentence, and enter a period at the end.\n");

	ch = getchar();   //scan character input and assign to ch

	while (ch != STOP) //enter loop as long as ch is not a period
	{

		if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')   //assume y is not a vowel for now
			putchar('Z');
		else if (ch == SPACE)
			while (ch == SPACE)  //enter this while loop if a space is detected
			{
				ch = getchar();  //ignores space and grabs next character after space! 
			
				if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')   //implement usual criteria
					putchar('Z');
				else
					putchar(ch);     //implement usual criteria
				
				//assuming the character after the initial space was not another space, this loop exits after running once...
				//...and grabs the next character below, then returns to original while loop
			}
		else
			putchar(ch); 

		ch = getchar();    //grabs next character no matter which "if" was chosen
	}

	printf("%c\n", ch);  //reprints the period at end since period is what caused exiting of initial while loop

	system("pause");

	return 0;
}
