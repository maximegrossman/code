/************************************************
  * filename: q5final.c
  * Exercise: Final Waiver, Exercise 5
  * Name: Maxime Grossman
  * Date Created: June 30, 2020
  *
  * Description: Write a program that takes the addresses of three double variables
  * and copies their values in ascending order from smallest to largest. The program then 
  * prints the values.

  *************************************************/


#include<stdio.h>
void sort(double*a, double*b, double*c);
int main(void)
{
	double row[3];
	double * ptr;
	ptr = &row[0];

	//double val = *ptr;

	printf("Please tell me three numbers.\n");

	scanf_s("%lf %lf %lf", &row[0], &row[1], &row[2]);

	printf("The numbers are %.2lf, %.2lf, and %.2lf.\nI will sort them now. Ready?\n", row[0], row[1], row[2]);

	system("pause");

	sort(ptr, ptr + 1, ptr + 2);		//ptr is the address of the first element of the array row

	system("pause");

	return 0;

}

void sort(double*a, double*b, double*c)
{
	float one = *(a);    //from the address, extract its values to work with
	float two = *(b);
	float three = *(c);

	if (one < two && one < three)     //enter this line if first value is smallest
	{
		 printf("%.2lf\n", *(a));    //immediately print first element if it's the smallest

		// one is in position one and therefore doesn't need altering
		// check two and three

		if (*(b) > *(c))  // exchange b value into position c if this is true, and a < c < b currently...
		{
			float i = *(b);  //copy *b value
			*(b) = *(c);    //move *c into second position
			*(c) = i;       //now *c equals *b equals i
			printf("%.2lf\n%.2lf\n", *(b), *(c));
		}
		else  //else a<b<c and therefore doesn't need altering
			printf("%.2lf\n%.2lf\n", *(b), *(c));
	}


	if (two < one && two < three)     //enter this line if two is the smallest value
	{
		printf("%.2lf\n", *(b));    //immediately print first element if it's the smallest

		// make *b the position of *a

		float j = *(a);
		*(a) = *(b);
		*(b) = j;

		if (*(b) > *(c))   // now compare these two
		{	
			// if true, exchange places

				float i = *(b);  //copy *b value
				*(b) = *(c);    //move *c into second position
				*(c) = i;       //now *c equals *b equals i
				printf("%.2lf\n%.2lf\n", *(b), *(c));
			
		}
		else //or else *b < *c and then you can leave as is
			printf("%.2lf\n%.2lf\n", *(b), *(c));

	}
	if (three < two && three < one)     //enter this line if three is the smallest value
	{
		printf("%.2lf\n", *(c));    //immediately print first element if it's the smallest

		//switch places of *c with *a

		float k = *(a);
		*(a) = *(c);
		*(c) = k;

		if (*(b) > *(c)) //now compare *b and *c
			// exchange *b and *c
		{
			float m = *(b);
			*(b) = *(c);
			*(c) = m;
			printf("%.2lf\n%.2lf\n", *(b), *(c));

		}
		else // then *b < *c and we don't need to do anything
			printf("%.2lf\n%.2lf\n", *(b), *(c));
	}
}