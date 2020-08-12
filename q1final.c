/************************************************
  * filename: q1final.c
  * Exercise: Final Waiver, Exercise 1
  * Name: Maxime Grossman
  * Date Created: June 28, 2020
  *
  * Description: Write a program that converts a cup volume to pints, ounces, tablespoons, and teaspoons.

  *************************************************/

#include<stdio.h>
int main(void)
{
	float cups;

	puts("Please enter the volume in cups. \n");

	scanf_s("%f", &cups);

	printf("\nOk, you entered %.2f cups.\n", cups);
	
	printf("The equivalent of your cup(s) in pints is %.2f. \n", cups / 2);

	printf("The equivalent of your cup(s) in ounces is %.2f. \n", cups*8);

	printf("The equivalent of your cup(s) in tablespoons is %.2f. \n", cups*8*2);

	printf("The equivalent of your cup(s) in teaspoons is %.2f. \n", cups*8*2*3);

	system("pause");
	return 0;
}