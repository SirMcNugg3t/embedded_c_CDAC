#include<stdio.h>
int get_num(void) 
{

    int num;
    printf("Number: ");
    scanf("%d", &num);  
    return num;
    
}
    
void swap(int *a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int x = get_num();
	int y= get_num();
	swap(&x,&y);
	
	printf(" x : %d\t y : %d",x,y);
	printf("\n");
	return 0;
	


}

