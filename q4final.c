/************************************************
  * filename: q4final.c
  * Exercise: Final Waiver, Exercise 4
  * Name: Maxime Grossman
  * Date Created: June 29, 2020
  *
  * Description: Write a program that asks the user to input their tax category and taxable income
  * and then calculates taxes owed.

  *************************************************/


#include<stdio.h>
#define TAX 0.15
#define TAX2 0.28
int main(void)

{
	float income, taxa, taxb;
	int category;

	printf("I know we just met, but can you tell me your taxable income?\n");  //ask for income
	scanf_s("%f", &income);  //read income, assign to float income

	while (income > 0)
	{
		taxb = 0;   //reset this to 0 each loop

		puts("\nPlease note the your tax category and enter:\n");
		puts("1 if you are single.\n");
		puts("2 if you are the head of household.\n");
		puts("3 if you are married and filing jointly.\n");
		puts("4 if you are married and filing separately.\n");
		puts("5 if you don't want to quit.\n");

		scanf_s("%d", &category);  //read the category and enter corresponding if statements accordingly

		if (category == 1)   //single
		{
			taxa = income * TAX;
			if (income > 17850)
				taxb = (income - 17850)*TAX2;
			else
				taxb = 0;
			printf("Total taxes are %.2f.\n", taxa + taxb);
			printf("\nDo you want to play again?\n");
			printf("Please enter another taxable income if so, or enter 0 if not.\n");
			scanf_s("%f", &income);  //this line scans a new income and re-enters the while loop if it is greater than 0
		}
		if (category == 2)  //head of household
		{
			taxa = income * TAX;
			if (income > 23900)
				taxb = (income - 23900)*TAX2;
			else
				taxb = 0;
			printf("Total taxes are %.2f.\n", taxa + taxb);
			printf("\nDo you want to play again?\n");
			printf("Please enter another taxable income if so, or enter 0 if not.\n");
			scanf_s("%f", &income);  //this line scans a new income and re-enters the while loop if it is greater than 0
		}
		if (category == 3)  //married, jointly
		{
			taxa = income * TAX;
			if (income > 29750)
				taxb = (income - 29750)*TAX2;
			else
				taxb = 0;
			printf("Total taxes are %.2f.\n", taxa + taxb);
			printf("\nDo you want to play again?\n");
			printf("Please enter another taxable income if so, or enter 0 if not.\n");
			scanf_s("%f", &income);  //this line scans a new income and re-enters the while loop if it is greater than 0
		}
		if (category == 4)  //married, separately
		{
			taxa = income * TAX;
			if (income > 14875)
				taxb = (income - 14875)*TAX2;
			else
				taxb = 0;
			printf("Total taxes are %.2f.\n", taxa + taxb);
			printf("\nDo you want to play again?\n");
			printf("Please enter another taxable income if so, or enter 0 if not.\n");
			scanf_s("%f", &income);  //this line scans a new income and re-enters the while loop if it is greater than 0
		}
		if (category == 5)  //quit category
			break;
		

	}

	system("pause");

	return 0;

}

