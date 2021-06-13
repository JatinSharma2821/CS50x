#include<stdio.h>
#include<string.h>
int main()

{	int ip;
	do
	{
		 ip = get_int("Enter initial population");// stores inital population as ip
	}
	while(ip<9);
	int fp;
	do
	{	int fp = get_int("Enter final population");// stores final population as ip
	}while(fp<ip);
	
	int np = 0; // stores no. of year population takes to reach final population level;
	while(ip<=fp)
	{ip = ip + ip/3 - ip/4;// 108 // 117 // 126 // 136 // 147 // 159 //172// 186 // 201
	
	np+=1;}// 1
	
}