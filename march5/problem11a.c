#include <stdio.h>

int main()
{
	int ip;
	while(1)
	{	
		printf(" 1 - ADD \n 2 - EXIT\n : ");
		scanf("%d",&ip);
		
		if (ip == 2) break;
		switch(ip)
		{
			case 1 :
				int x,y;
				printf(" Enter 2 numbers:\n");
				scanf("%d %d",&x,&y);
				printf(" Result : %d\n",x+y);
				break;
				

			default:
				printf("Invalid input.\n");
		}
		
		
		
	}
	return 0;
}
