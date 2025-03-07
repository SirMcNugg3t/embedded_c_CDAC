#include<stdio.h> 

int pow(int base,int power)
{	
	int result= 1;
	while(power > 0 )
	{
		result  *= base;
		power--;
	}
	return result;
}

int main(){
	printf("%d", pow(2,5));
	printf("\n");
	return 0;
}
		
