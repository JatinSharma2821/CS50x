#include<stdio.h>
#include<string.h>
//#include<cs50.h>// made by cs50 team
// help50 to check compile error
//style50 to see style recommendation
//check50 to get code checked by judges in various test cases
int main(void)
{   string name  = get_string("Enter your name here");
    printf("Hello ,%s",name);
}
//rm - remove the file
// mv - moves file - renames the file ---- mv initialfilename.extension finalfilename.extension

//mkdir - make directory - makes a folder
// mv initialfile.extension directoryname/
// mkdir Intro
//mv hello.c Intro/
//cd enters a directory

//mv filename.extension .. ---for moving one level up
// cd .. ----for going to dir one level up
// rmdir ----for removing directory

// Data Format codes
/*
%c - char
%i - int
%f - float
%li - long int
%s - string
*/



//prototype- giving compiler hint a function with this name will be ahead and without error program iscompiled even defining func after main()
