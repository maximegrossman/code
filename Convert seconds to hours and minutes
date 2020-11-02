/************************************************
 * filename: module2exercise4.c
 * Exercise: Module 2, Exercise 4
 * Name: Maxime Grossman
 * Date Created: February 1, 2019
 *
 * Description: This program prompts the user to enter the number of seconds and then converts that value to hours and minutes.
 *************************************************/

#include<stdio.h>
int main(void)

{
	int seconds;
	printf("Please enter the number of seconds.\n");   //user inputs seconds
	scanf_s("%d", &seconds);                           //scanf picks up input, assigns to seconds

	while (seconds > 0)        //loops as long as seconds > 0
	{
		float hours;           //hours is a float
		hours = seconds / 3600;          //seconds divided by 60 is minutes, divided by 60 again is hours
		float minutes;                 //minutes is a float
		minutes = (seconds - (hours * 3600)) / 60;   //leftover minutes calculated by subtracting out our hours (converted back to seconds)
		printf("%d seconds is %.0f hours and %.2f minutes.\n", seconds, hours, minutes); //seconds and hours are whole numbers, minutes has 2 decimals

		printf("Please enter number of seconds again.\n");  //new input for new loop
		scanf_s("%d", &seconds);   //seconds value is reassigned and loop starts back to check if its more than 0
	}

	getchar();
	return 0;

}
