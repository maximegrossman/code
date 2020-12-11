/************************************************
  * filename: q3final.c
  * Exercise: Final Waiver, Exercise 3
  * Name: Maxime Grossman
  * Date Created: June 29, 2020
  *
  * Description: Write a program that asks the user to input their height in centimeters
  * and convert this into feet and inches.

  *************************************************/


#include<stdio.h>

#define MIN 0
#define CONVERT 2.54
int main(void)

{
	float heightcm;
	float heightin;
	int heightft; 
	int heightin2;

	puts("Please enter a height in centimeters. Enter 0 to quit.\n");

	while (scanf_s("%f", &heightcm)) //enter while loop when a number value is read
	{
		if (heightcm > MIN)  //make sure the cm value is positive
		{

			heightin = heightcm / CONVERT;   //convert cm to in

			heightin2 = (int)(heightin);   //remove the decimal portion of the inches measurement 

			heightft = heightin2 / 12;  //divide the inches, without decimal, by 12 to get feet

			//check our numbers first:
			//printf("%.2f\n", heightin);
			//printf("%d\n", heightin2);
			//printf("%d\n", heightft);

			printf("%.2f cm = %d feet, %.2f inches.\n", heightcm, heightft, heightin - (heightft * 12));
		}
		else
			break;
	}

	system("pause");

	return 0;

}

