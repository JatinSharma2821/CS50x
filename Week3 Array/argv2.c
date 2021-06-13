#include<stdio.h>
#include<string.h>
#include<cs50.h>

//command argument line  is command written after program name
/*
e.g. - make hello --- hello is command line argument to program hello.c

rm hello  --- hello is a cmd line argument to rm

*/


// Till now we have used predefined command ,now we will define our own command;
int main(int argc, string argv[])
 // here argc - is - argument coutn mean no. of argument program takes to run including program name
 // string argv[] -- refers to array of strings ---- argv - argument vector --- vector is just fancy  name of list. ..
{
	if (argc == 2)
	{	int size  = strlen(argv[1]);
	
		for (int i =0; i<size; i++)
		{// this program prints each character of cmd line argument seperately
		printf("Hello , %c\n",argv[1][i]);// 0 index no. will be occupied by 0 so argv -  our input will get index no - 1
		}
	}	// ./argv JAtin --- will give -- Hello, JAtin while only ./argv will give ---- Hello, User

	else{
		printf("Hello, User\n"); // default output if user does not enter anything.
	}
	


}