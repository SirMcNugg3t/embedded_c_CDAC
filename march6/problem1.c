#include <stdio.h>
//Adding 2 numbers but using functional programming 

int input_number()
{	
	int a;
	printf("Enter number : \n");
	scanf("%d",&a);
	return a;
}

int add(int a, int b)
{
 	return a+b;
 }

int main()
{
	printf(" Enter 2 numbers : ");
	int x =input_number(); int y = input_number();
	printf("Answer :  %d \n" ,add(x,y)); 
	return 0;
}

	
