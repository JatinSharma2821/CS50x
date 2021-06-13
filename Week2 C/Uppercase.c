#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main()
{
    string name = get_string("Enter name: ");

   int n = strlen(name);// strlen provide lenght of string

    for(int i=0; i<n; i++)
    {

        if (name[i]>='a' && name[i]<='z') // it refers to if given element is smallcase alphabet
        {
            printf("%c",name[i] - 32);// it converts to uppercase letter
        }
        else{
            printf("%c",name[i]);// else output original element
        }

        //the code can be shoterned using <cryptic.h> and then islower()-- toupper()

        // if(islower(name[i]))
        // {printf("%c",toupper[name[i]]);

    }printf("\n");

// vector is fancy way of saying list

}