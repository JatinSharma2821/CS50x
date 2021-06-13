#include<stdio.h>
int triple (int num) // ----- num is Global variable to triple () 
{
	int out = num*3;// ----- out is a local variable to triple()
	return out;
}
int main()
{
/*	int num = 2; ----- num is Local Variable to Main
	triple (num); 

	As Local Global variables name sound, Local variable cannot be accessed by function in whose scope that local variable is not declared
	like - main cannnot access out named Local variable

	While num is declared in main() but still triple () can access num - bcz it is global variable.

	Question - But here we have seen out gives required value for printing output of main(). And above, we just studied 
	that out being a local variable cannot be accessed by main().
	So, how does main() prints output when triple's output is not accessible?

	Ans -- First of all, thing to clearify is that ,it is not said that output caannot be accessed
	but local variable cannot be acessed.
	Moving forward to answer your question  that without accessing local variable of function , main() gives output.
	--- It is due to the fact that caller function recieves a sort of read only copy of local varible to work with it
	 , and it is known as Pass By Value.
	 so caller function can give output
	but doesnot posses permission to change or do anything else with callee's local variable.

	So, what is its side effect?
	---- Variale in caller function calling callee function remains unaltered unless its value is overrided.

	e.g. - int main()
	{
		int num = 2; ----- num is Local Variable to Main
		triple (num);
	} ---- Here num remains unaltered


	int main()
	{
		int num = 2; ----- num is Local Variable to Main
		num = triple (num);
	} // here num is overrided by output of triple(num) so its value get changed




In case of Array, Calle recieves full flashed value and not just copy, bcz it will be very long and heavy process to first copy for lets say array of size 100,100, 1000*1000
, so caller trusts callee and actually pass  the value and it is called Passed by reference


*/


#include<stdio.h>


void set_arr(int array[4])
{
	int array[0] = 22;
	
}
void set_int(int x);
{
	int x = 20;
}

int main(void)
{
	int a = 10;
	int b[4] = {1,2,3,4}

	set_int(a);
	set_arr(int b[4]);
	printf("a is %i\n b[0] is %i\n", a,b[0]) /// here b[0] will be 20 but a will be 10 ...re call pass by value in function and pass by refernce in array;

}

void set_int (int x)
{
	x = 22;
	return x;
}

void set_arr(int arr[4])
{
	arr[0] = 22;
	return arr[4];
}