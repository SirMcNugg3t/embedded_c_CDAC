#include <stdio.h>

int min = 7 , max = 66,  num = 999;

int main()
{

	min = max = num;
	printf("%d\t %d\t %d\t\n",min, max, num); 
	
	 min = 7 ; max = 66; num = 999;
	
	num = max = min;
	printf("%d\t %d\t %d\t\n",min, max, num); 
	
	min = 7 ; max = 66; num = 999;

	min = num = max ;
	printf("%d\t %d\t %d\t\n",min, max, num); 
	
	return 0 ; 
	
}
	
	
