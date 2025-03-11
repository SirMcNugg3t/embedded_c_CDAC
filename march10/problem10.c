/*
Write a C program that defines an enum Operation with values ADD, SUBTRACT,
MULTIPLY, and DIVIDE. Write a function performOperation that takes two integers
and an Operation enum value, performs the corresponding operation, and returns the
result. Demonstrate this function in your main function. Get 2 numbers from user.
*/

#include <stdio.h>

enum operation{ ADD, SUBTRACT, MULTIPLY,  DIVIDE };

float perform_operation(enum operation, int a,int b){
	switch(operation){
	
	case 0:
		return a+b;
	case 1:
		return a-b;
	case 2:
		return a*b;
	case 3:
		if (b ==0) return 0;
		return a/b;
	default:
		printf("ERROR");
		return 0;
	}

int main(){
	int a;
	printf(" a : %d\n");
	scanf("%d", &a);
	int b;
	printf(" b : %d\n");
	scanf("%d", &b);
	
	float ans = perform_operation(enum operation,a,b);
	printf("Answer: %.2f\n",ans);
	return 0;
}
	
	
	
	
	
	
		
		
