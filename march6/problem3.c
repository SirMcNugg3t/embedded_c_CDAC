#include <stdio.h>

int array_average(int arr[],int arr_size,int i)

{
	int total =0 ;
	for (;i < arr_size;i++)
	{
		total += arr[i];
	}
	int average  = total /arr_size;
	return average;
	
	
}
int main()
{
	int size, i = 0;
	printf("Enter Size:");
	scanf(" %d" , &size);
	int array[size] ;
	for (;i < size;i++)
	{
		printf(" %d : ",i+1);
		scanf("%d", &array[i]);
	}
	printf("%d\n", array_average(array, size,0));
	return 0 ;
}
	
