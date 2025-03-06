#include<stdio.h>

int main()
{
	int a = 0;
	int b = 1;
	
	int n = 8;
	printf("0\t1\t");
	for(int i = 0; i< n ; i ++)
	{
		int c = a +b;
		printf("%d\t",c);
		a = b ; 
		b = c ; 
	}
	return 0;
}
