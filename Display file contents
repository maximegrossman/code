/************************************************
  * filename: module6ex1.c
  * Exercise: Module 6, Exercise 1
  * Name: Maxime Grossman
  * Date Created: June 23, 2020
  *
  * Description: Write a program that sequentially displays on screen the contents of all 
  * of the files listed in the command line. Use argc to control a loop.

  *************************************************/

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main(int argc, char const *argv[]) // for command line arguments 

{
	int i;
	int ch;
	FILE * fp; //file pointer
	printf("This program outputs the contents of files.\n"
		"There are special markers for START/END of each file, indicated by double asteriks '**' and a special message\n");

	if (argc == 1)
	{
		printf("ERROR!! You need to include file names in the command line when executing this program!\n");
		printf("Please give me files to output.\n");
	}

	for (i = 1; i < argc; i++) // we start at i = 1
			//use argc as a test expression so that we don't try to read a file that's not even there
	{
		fp = fopen(argv[i], "r"); // opens file pointed to by fp in text mode and reads
		printf("\n**START OF FILE %d NAMED \"%s\"**\n", i, argv[i]);
		while ((ch = getc(fp)) != EOF) // while getc has not reached the end of the file pointed to by fp
		{
			putc(ch, stdout);
		} // output character obtained by getc to the stdout, in this case the screen
		fclose(fp); // close the file 
		printf("**END OF FILE %d NAMED \"%s\"**\n", i, argv[i]);
		
	}

//	system("pause");

	return 0;
}

