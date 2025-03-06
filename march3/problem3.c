#include <stdio.h>
//Write a C program to show the size of int float double
int main()
{
	int a = 100;
	float pi = 22/7;	
	double doub = 3.33;
	printf("Size of Int - %lu bytes \n,Size of float - %lu bytes \n,Size of Double - %lu bytes \n",sizeof(a),sizeof(pi),sizeof(doub));
	return 0;
}


