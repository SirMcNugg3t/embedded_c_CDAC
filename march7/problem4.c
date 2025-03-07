#include<stdio.h>

int get_num(void) {
    int num;
    printf("Number: ");
    scanf("%d", &num); 
    return num;
}


int fact(int n)
{
	if(n<=1)return 1;
	return n*fact(n-1);
}	

int main()
{

	printf("Answer : %d",fact(get_num()));
	printf("\n");
	return 0;
}
	
