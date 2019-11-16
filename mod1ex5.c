/************************************************
  * filename: mod1ex5.c
  * Exercise: Module 1, Exercise 5
  * Name: Maxime Grossman
  * Date Created: December 7, 2018
  *
  * Description: This program performs arithmetic calculations on an integer.
  *************************************************/


#include<stdio.h>
int main(void)

{
	int number = 11; 

	int number_times_2 = number * 2;						//multiply number by 2; asterisk symbol is for multiplication
	printf("Number times 2 is %d\n", number_times_2);       //printing number times 2

	float number_divided_by_2 = number / 2.0;						  //divide the number by 2.0 not 2; use forward slash for division
	printf("Number divided by 2 is %.1f\n", number_divided_by_2);	 //printing number divided by 2; writing %.1f creates a float with 1 decimal  

	int number_plus_2 = number + 2;   	//add 2 to number; plus symbol is used as we are accustomed to
	printf("Number plus 2 is %d\n", number_plus_2);     //printing number plus 2

	int number_minus_2 = number - 2;   	//subtract 2 from number; minus symbol is used as we are accustomed to
	printf("Number minus 2 is %d\n", number_minus_2);      //printing number minus 2

	int number_squared = number * number;     //square number; asterisk symbol is for multiplication
	printf("Number squared is %d\n", number_squared);    //printing number squared

	return 0;
}
