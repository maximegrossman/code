/************************************************
 * filename: module4exercise5.c
 * Exercise: Module 4, Exercise 5
 * Name: Maxime Grossman
 * Date Created: March 25, 2019
 *
 * Description: This program reads 2 integers and reassigns the larger value to the smaller value using pointers.
 *************************************************/

#include<stdio.h>
void max_value(int * qqq, int * rrr);   //max_value( ) takes two arguments that are pointers to two integers entered by the user
int main(void)

{
	int q, r;   //we will ask for input q and r integers

	printf("Please enter 2 integer values.\n");     //input prompt

	if (scanf_s("%d %d", &q, &r) == 2)     //must validate that 2 integers are read
	{
		max_value(&q, &r);            //call the max_value function, inputting our q and r addresses 
		printf("Both values are now: %d %d\n", q, r);    //print both q and r values to demonstrate reassignment
	}
	else
		printf("Please follow instructions: enter 2 integer values!\n");   //invalid inputs lead to this message
		//though more than 2 values could be inputted, as long as first 2 are integers all else will be ignored...
		//... and program will run with no problem

	system("pause");

	return 0;
}

//In the following function, based on our use case:

//pointer qqq has the value of &q	...		and pointer rrr has the value of &r
//so qqq points to q	 ...	 and rrr points to r
//thus *qqq gives you the value of q		 ...	 and *rrr gives you the value of r

void max_value(int * qqq, int * rrr)    //qqq points to an int and rrr points to an int
{

	if (*qqq > *rrr)    // if q > r
		*rrr = *qqq;    // then make rrr point to q, thus *rrr = *qqq = q
	else                // else if r > q
		*qqq = *rrr;    // then make qqq point to r, thus *qqq = *rrr = r

}