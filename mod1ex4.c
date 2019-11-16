/************************************************
  * filename: mod1ex4.c
  * Exercise: Module 1, Exercise 4
  * Name: Maxime Grossman
  * Date Created: December 7, 2018
  *
  * Description: This program converts age in years to age in days.
  *************************************************/


#include<stdio.h>
int main(void)

{
	int age_years = 29;                     //using a 29-year-old 
	int age_days = (age_years) * 365;       //age_days is our age in years converted to age in days

	printf("I am %d years old which is also %d days old!\n", age_years, age_days);    //prints statement using both variables

	return 0;
}
