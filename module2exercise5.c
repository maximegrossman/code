/************************************************
 * filename: module2exercise5.c
 * Exercise: Module 2, Exercise 5
 * Name: Maxime Grossman
 * Date Created: February 1, 2019
 *
 * Description: This program asks for a price, adds a tax to it, and prints out the total dollars and cents price.
 *************************************************/

#include<stdio.h>
#define RATE 1.056  //we add 1 to tax rate to more easily calculate total price including tax
int main(void)

{
	float price;   //price is float since it may have cents

	printf("What is the price of the item?\n");  //user will input price
	scanf_s("%f", &price);    //scanf picks up price

	float total = price * RATE;     //total price including tax

	int dollars;    //dollars is an int since it is a whole number
	dollars = (int)total;        //only grabs whole number portion of total price 

	float cents;
	cents = (total - (float)dollars) * 100;  //total price minus total price's dollar portion leaves us total price's cents
	//multiply cents by 100 to get rid of decimal and to make it a whole number

	printf("Item price of %.2f with sales tax is %d dollars and %.0f cents.\n", price, dollars, cents);
	//above line prints sentence, displaying price with 2 digits, and dollars and cents with 0 digits

	system("pause");

	return 0;

}
