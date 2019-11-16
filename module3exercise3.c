/************************************************
 * filename: module3exercise3.c
 * Exercise: Module 3, Exercise 3
 * Name: Maxime Grossman
 * Date Created: March 1, 2019
 *
 * Description: This program determines if number is prime or not with modulo operator.
 *************************************************/

#include<stdio.h>
int main(void)
{
		int n, c = 2;

		printf("Please enter a number to check if it is prime\n");
		scanf_s("%d", &n);

		
		for (c = 2; c <= n - 1; c++)    //loops as long as c <= n-1 since n has to be greater than c to be divided by it
		{
			if (n%c == 0)   //if there is no remainder term, then n is divisible by c
			{                                      //if condition is only entered when the remainder is 0; if remainder not 0, jumps back to for loop
				printf("%d isn't prime.\n", n);   //number entered is not prime
				printf("Try a new number.\n");   //try again
				scanf_s("%d", &n);				//reads new number and assigns it as new n, and for loop is run again
			}
			
		}

		if (c == n)                              //once the for loop is exahausted and if condition is never entered, we conclude prime
			printf("%d is prime.\n", n);

		system("pause");
		return 0;

	}