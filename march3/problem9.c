#include <stdio.h>
#include <math.h>


unsigned int a;
signed int b;
short int c;
signed char d;
unsigned char e;



int main()
{	
	int  size_a = sizeof(a);
	int size_b = sizeof(b);
	int  size_c = sizeof(c);
	int  size_d = sizeof(d);
	int  size_e = sizeof(e);
	
	
	//Unsigned Int 
	int min_a = 0;
	int max_a = pow(2,(8*size_a)) - 1;	
	printf("UNSIGNED INT :\n \t Byte size : %d \n\t Range : %d to %d \n", size_a , min_a, max_a );
	
	
	//Signed Int 
	int min_b = -pow(2,(8*size_b)-1);
	int max_b = pow(2,(8*size_b)-1) - 1;	
	printf("SIGNED INT :\n \t Byte size : %d \n\t Range : %d to %d \n", size_b , min_b, max_b );
	
	//Short Int 
	int min_c = -pow(2,(8*size_c)-1);
	int max_c = pow(2,(8*size_c)-1) - 1;
	printf("SHORT INT :\n \t Byte size : %d \n\t Range : %d to %d \n", size_c , min_c, max_c );
	
	//Signed Char
	int min_d = -pow(2,(8*size_d)-1);
	int max_d = pow(2,(8*size_d)-1) - 1;	
	printf("SIGNED CHAR :\n \t Byte size : %d \n\t Range : %d to %d \n", size_d , min_d, max_d );
	
	//Unsigned Char 
	int min_e = 0;
	int max_e = pow(2,(8*size_e)) - 1;	
	printf("UNSIGNED CHAR :\n \t Byte size : %d \n\t Range : %d to %d \n", size_e , min_e, max_e );
	
	
	return 0;
}

 
