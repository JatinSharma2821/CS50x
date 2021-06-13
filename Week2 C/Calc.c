#include<stdio.h>
//include<cs50.h>

int main(void)

{   int num = get_int("Enter the total no. you are going to add\n");// takes input from user
    int sum = 0;
    for(int i = 1; i<=num; i++)
    {
    int x = get_int("Enter the no. %i\n",i);
    sum+=x;
    }
    printf("%i\n",sum);
	float division = sum/2;// will give integral followed by all zero after decimal and  not the actual float value
	// bcz atleast one of them need to be float so either we go up and data type of sum or use typecast to update datatype of sum then answer will be correct
// typecast  -used to convert one datatype to another.


}