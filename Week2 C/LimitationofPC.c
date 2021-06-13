#include<stdio.h>

void main(void)
{
	float x = get_float("Enter x :");
	float y = get_float("Enter y :");

	printf("%.10f\n", x/y);
	
	//1. // it gives 0.10000000005463t4-- something like that because of Imprecision.
	 // Bcz computer can count finitely high or precisely hihg but not infinitely somewhere it has to approximate so it is called Imprecision

	 /*
	2. - Shortage of bits - fie example  bin no. - 111 is 7 in decimal , while trying to write 8 we just add 1 - 111 + 1 = 1000; but if we have thre bits only to represent no. then it will be 000 and 1 will disapper making 8 similar to 0 in binary form
	Same thing happened after 1999 when 2000 came......bcz earlier year represented by twwo digits like 95 for 99 
	and if they try to write 2000 as 00, it woul;d be similar to 1900
	Same gonna happen in 2038 bcz we use 32 bits to count seconds, time.,,minutes and on 1 JAn 2038, total secons willl be 4 billio0n and it is max value to be represented by 32 bits
	So verything inlucding pc,mobile,sev er, satellite, hardware will have issue
	


	 */
}