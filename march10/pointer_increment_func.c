#include<stdio.h>

void inc(int* x){
	printf("%d\n",x);
	(*x)++;
	
	printf("%d\n",x);
}

int main(){
	int a = 10;
	inc(&a);
	
	return 0;
}
	
