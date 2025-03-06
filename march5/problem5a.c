#include<stdio.h>

int fib(int n)
{
	if (n <= 1)
	{
		return n;
	}
	return fib(n-1) + fib(n-2);
	
}

int fact(int x)
{
	if(x ==1) 
	{
		return 1;
	}
	return x*fact(x-1);
}

int main()
{
	printf("%d\n",fib(12));
	printf("%d\n",fact(12));
	return 0; 	
}
