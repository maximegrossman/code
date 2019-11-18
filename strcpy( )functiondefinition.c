
#include<stdio.h>
#include<string.h>
#define _CRT_SECURE_NO_WARNINGS
#define LENGTH 10
char*stringcopy(char*array1, char*array2);
int main(void)

{
	char array1[LENGTH] = "Hello.";
	char array2[LENGTH] = "Goodbye.";
	char*p = array1;
	char*q = array2;

	puts(array1);  //prints array1, which is Hello

	stringcopy(array1, array2);

	puts(array1);

	system("pause");

	return 0;
}

char*stringcopy(char* array1, const char* array2)     //function prototype
{
	int i;
	for (i = 0; array2[i] != '\0'; i++)
		array1[i] = array2[i];
	array1[i] = '\0';
	return array1;
}