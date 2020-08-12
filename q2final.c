/************************************************
  * filename: q2final.c
  * Exercise: Final Waiver, Exercise 2
  * Name: Maxime Grossman
  * Date Created: June 28, 2020
  *
  * Description: Write a program that requests a user's first name and last name
  * and counts the letters in each word. The program then prints out the names and count
  * under each respective name in the line below, aligned with an indent equal to the
  * number of letters before the number and then after the number.

  *************************************************/

#include<stdio.h>
#include<string.h>

#define FNAME 50
#define LNAME 50
void space(int a);  //function prototype of space, which takes an int as input

int main(void)
{
	//int i, j;

	char first[FNAME];
	char last[LNAME];

	puts("Please type your first name, then press enter.\n");
	gets(first);  //assign first name to array called first

	puts("\nPlease type your last name, then press enter.\n");
	gets(last);  //assign last name to array called last

	int fcount = strlen(first);  //fcount is first name letter count
	int lcount = strlen(last);  //lcount is last name letter count

	printf("%s %s\n", first, last);  //print with indent before the number count
	space(fcount);					//call space function to print blank spaces according to fcount
	printf("%d ", fcount);			//print first name count
	space(lcount);					  //call space function to print blank spaces according to lcount
	printf("%d\n ", lcount);		 //print last name count

	printf("\n%s %s\n", first, last); //print with indent after the number count
	printf("%d ", fcount);			//print first name count
	space(fcount);					//call space function to print blank spaces according to fcount
	printf("%d ", lcount);       //print last name count
	space(lcount);				////call space function to print blank spaces according to lcount
	putch('\n\n');

	system("pause");

	return 0;

}

void space(int a)  //here we define the function called space, which returns no value and just prints blank spaces
{
	int i;  

	for (i = 1; i < a; i++)
		putchar(' ');  //keep printing blank spaces until i is 1 less than int a

}