
#include <stdio.h>

int main(){
	//Iteration 
	int i = 0;
	int j ;
	
	
	int n = 5;
	
	loop_i:
	j = 0;
	if(i > n) 
	{	
		goto exit;
	}
		
	else
	{	
		loop_j:
		if (j >= i)
		{
			goto exit_j;
		}
		else
		{
			printf("*");
			j++;
			goto loop_j;
		}
		exit_j:
		printf("\n");
		i++;
		goto loop_i;
	}
	
		
	exit: 
		return 0;
}  




