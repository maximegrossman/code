/************************************************
  * filename: module5ex1.c
  * Exercise: Module 5, Exercise 1
  * Name: Maxime Grossman
  * Date Created: December 1, 2019
  *
  * Description: This program finds all prime numbers until 10,000 and prints out the last five found up until 10,000.
  *************************************************/


#include<stdio.h>
#include<string.h>
#define ARRAY 5000
#define LIMIT 10000
int main(void)

{
	int i, j, n = 0;
	int list[ARRAY];

	for (j = 2; j <= 100; j++)		 //start off at j = 2 and increment j until j <= 10000
	{
		for (i = 2; i <= j; i++)	 //take another integer i 

			if (j%i == 0)			//does j divide by i perfectly with no remainder?
			
				if (j != i)			//if j is not the same as i, j is divisible by a number except itself and 1
					break;			//j is not prime; exit the "for" loop and go back to first "for" loop to increment j
				else if (j == i)	//does j divide by i perfectly and j = 1?
					{
					list[n] = j;	//j is prime; assign it as an element in our array
					n++;			//increment n so that the next prime number found is assigned as the next element in our array
					}
							
	
			else if (j%i != 0)    //if there is a remainder after dividing j by i, results are inconclusive... increment i and keep trying
				continue;
			 
	}

printf("Largest 5 prime numbers between 1 and 10,000 are: %d, %d, %d, %d, %d. \n", list[n - 1], list[n - 2], list[n - 3], list[n - 4], list[n - 5]);   
	
						//because n is incremented after the final prime number assignment, when we print our last prime number,
						//we must start printing at list[n-1]

system("pause");

return 0;

}


