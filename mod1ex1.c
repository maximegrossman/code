/************************************************
  * filename: mod1ex1.c
  * Exercise: Module 1, Exercise 1
  * Name: Maxime Grossman
  * Date Created: December 7, 2018
  *
  * Description: This program initializes several variables and prints a statement.
  *************************************************/


#include<stdio.h>
#define First_name "George"              //defining the string "George"
#define Last_name "Clooney"             //defining the string "Clooney"

int main(void)

{
	char Middle_Initial;                    //declare Middle_Initial as a character
	Middle_Initial = 'T';                   //use single quote around a character

	int Year_born;                          //declare Year_born as an int
	Year_born = 1961;                       //year is an unsigned integer value; specify it with %u
	float Height_in_meters;
	Height_in_meters = 1.8;               //use %.1f to round float to 1 decimal point

	long Net_worth_USD;                 //this number falls outside of int; use long
	Net_worth_USD = 512345678;

	printf("%s %c %s, born %u, is %.1f meters tall and is worth $%ld", First_name, Middle_Initial, Last_name, Year_born, Height_in_meters, Net_worth_USD);

	return 0;
}
