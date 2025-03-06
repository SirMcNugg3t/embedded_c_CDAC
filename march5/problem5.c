#include<stdio.h>
// factorial
 
int main()
{
	printf("Enter a number : ");
	int n;
	scanf("%d", &n);
	
	int res = 1;
	
	
	for(int i=1; i <= n ; i++)
	{ 
		res = res * i;
	}
	
	printf("Result : %d",res);
	return 0;
	
}
