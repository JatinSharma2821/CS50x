#include<cs50.h>
#include<stdio.h>
#include<string.h>

int main(int argc, string argv[])// int return type of main is bcz it returns 0 in most of program
{
    
    if (argc != 2)
    {
        printf("Error in Command Line Argument\n");
        return 1 ;// user won't see this but developer can check by echo $? command
    }
    printf("Congrats, %s\n, you are different than others\n", argv[1]);
    return 0;
    
}