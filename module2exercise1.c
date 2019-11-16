/************************************************
 * filename: module2exercise1.c
 * Exercise: Module 2, Exercise 1
 * Name: Maxime Grossman
 * Date Created: February 1, 2019
 *
 * Description: This program prints all positive odd numbers up until 100.
 *************************************************/

#include <stdio.h>
int main(void)
{
	int odd = 1;          		    //start with the number 1

	while (odd <= 100)     		   //start of loop
	{                			    //start of block
		printf("%d \n", odd);   	 //print our first odd number, 1
		odd += 2;         	           //adding 2 each time will keep our number odd  
	}              			     //end of block

	system("pause");
	return 0;
}
