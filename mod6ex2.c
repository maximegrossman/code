/************************************************
	* filename: mod6ex2.c
	* Assignment: Module 6, Exercise 2
	* Name: Maxime Grossman
	* Date Created: June 23, 2020
	*
	* Write a program that creates a structure template with the following data fields.
	* The program should then prompt the user to enter the data to populate the structure.
	* Finally, use printf() to display the information entered by the user.
	* a.	Account number
	* b.	Account owner street address (string)
	* c.	Account owner city/state (string)
	* d.	Account owner zip code
	* e.	Account balances
	* f.	Account credit limit
	* g.	Account name
	*************************************************/

#include <stdio.h>
#include <string.h>
int main(void) {

	struct information {
		long int accountnumber; // prepared for a very long account number
		char address[200];
		char citystate[100];
		int zipcode;
		float balances;
		float creditlimit;
		char name[50];
	};
	struct information bank;

	printf("Please enter the following info and press enter-\n");
	printf("Your account number:\n");
	scanf_s("%ld", &bank.accountnumber);
	while (getchar() != '\n') // clear newline from stack 
	continue;
	printf("Please enter you street address:\n");
	fgets(bank.address, 200, stdin);
	printf("Please enter your city and state:\n");
	fgets(bank.citystate, 100, stdin);
	printf("Now your zip code please:\n");
	scanf_s("%5d", &bank.zipcode);
	printf("Now enter your account balance:\n");
	scanf_s("%f", &bank.balances);
	printf("Now enter the credit limit:\n");
	scanf_s("%f", &bank.creditlimit);
	while (getchar() != '\n')
		continue;
	printf("and the name:\n");
	fgets(bank.name, 50, stdin);


	printf("Ok, so to recap:\n"
		"Account number:...%ld\n"
		"Address:..........%s %s %d\n" // combines address, city, state, and zip
		"Balances:.........$%.2f\n"
		"Credit Limit:.....$%.2f\n"
		"Name:.............%s\n", bank.accountnumber, bank.address, bank.citystate, bank.zipcode, bank.balances, bank.creditlimit, bank.name);

	system("pause");
	return 0;
}