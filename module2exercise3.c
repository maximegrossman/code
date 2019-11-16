/************************************************
 * filename: module2exercise3.c
 * Exercise: Module 2, Exercise 3
 * Name: Maxime Grossman
 * Date Created: February 1, 2019
 *
 * Description: This program prompts the user to enter a trip distance in miles, a speed in miles/hour, and a name. 
 *	Then it calculates how long the trip will take and then displays the information in the following form:
 *	Sam, your trip of 100 miles at 40 mph will take 2.5 hours

 *************************************************/


#include<stdio.h>
int main(void)

{
	char name[40];                                              //user name can be up to 40 characters
	printf("Your first name, please, sir or madam?\n", name);   //user inputs name
	scanf_s("%s", &name);                                        //scanf picks up name

	float miles, speed;                 //miles and speed of trip are float, in case decimals are inputted

	printf("Please enter the trip's distance in miles.\n");     //user inputs miles
	scanf_s("%f", &miles);                                        //scanf picks up miles

	printf("Please enter the speed in miles per hour.\n");   //user inputs speed
	scanf_s("%f", &speed);                                   //scanf picks up speed

	float numberhours;               //number of hours to complete trip
	numberhours = miles / speed;     //numberhours calculated by dividing miles by speed 

	printf("%s, your trip of %1.0f miles at %1.0f mph will take %.1f hours.\n", name, miles, speed, numberhours);
	//above line prints out final sentence, miles should be a whole number, speed should be a whole number, and hours can have 1 decimal

	system("pause");

	return 0;

}