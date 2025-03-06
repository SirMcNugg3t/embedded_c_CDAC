#include <stdio.h>
// unary operators with pre and post 

int a = 10;
int n = 5;

int main()
{
	printf("\nPRE-Increment and Decrement using :\n");
	
	for(int i= 0;i <n;i++)
	{
	printf("%d\n",++a);
	}
	
	for(int i= 0;i <n;i++)
	{
	printf("%d\n",--a);
	}
	
	printf("\nPOST-Increment and Decrement using :\n");
	
	for(int i= 0;i <5;i++)
	{
	printf("%d\n",a++);
	}
	
	for(int i= 0;i <5;i++)
	{
	printf("%d\n",a--);
	}
	
	
}

