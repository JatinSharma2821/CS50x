#include<stdio.h>
#include<cs50.h>
int main()
{
    long Number = get_long("Number: ");

    int sum = 0;
    int sumsquare = 0;
    int rem1 = 0;
    int rem2 = 0;
    int count = 0;

    while(Number > 0)
    {
       // 369421438430814
        rem1 = Number%10;//4/8 // 3 //8 // 4 // 2 // 9 // 3
        sum = sum + rem1;//4 //12 // 15 //23 // 27// 29 // 38 // 41
        //printf("%i\n",sum);
        Number = Number/10;
        count++;
        if (Number==0){break;}


        rem2 = Number%10;//1 // 0 // 4 // 3 // 1 //4 // 6
        int element = rem2*2;//2 //0 // 10 // 6 //2 // 8 // 12
                             //2 //0 // 8

        sumsquare += element%10 + element/10;//2 // 2 // 10 // 16 // // 18 // 26 // 29
        //printf("Sumsquare : %i\n",sumsquare);
        Number = Number/10;

        //printf("\n");

        count++;
    }

    /*printf("Sum : %i\n",sum);
    printf("Sumsquare :%i\n",sumsquare);
    printf("Answer :%i\n",ans);
    printf("count :%i\n",count);*/

    if ((sum+sumsquare)%10==0) // 72

    {
            if (rem1==3 && (rem2==4 || rem2==7))
        {
            if (count==15)
            {printf("AMEX\n");}

            else
            {
                printf("INVALID\n");
            }
        }

        else if(rem1==4)

        {   if (count==13 || count == 16)
            {printf("VISA\n");}

            else
            {
                printf("INVALID\n");
            }
        }

        if(rem2==5 && (rem1==1 || rem1==2 || rem1==3 || rem1==4 || rem1==5))
        {   if (count==16)
            {printf("MASTERCARD\n");}

            else
            {
                printf("INVALID\n");
            }
        }
        else if(rem2==4)
        {   if (count==13 || count == 16)
            {printf("VISA\n");}

            else
            {
                printf("INVALID\n");
            }
        }

    }

    else
    {
        printf("INVALID\n");
    }


}