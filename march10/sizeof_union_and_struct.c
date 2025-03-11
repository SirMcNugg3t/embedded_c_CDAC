#include<stdio.h>

struct person {
	char Name[10];
	int id_num;
};

union age{
	int i;
	char a[10];
	float f;
};
	


int main(){
	struct person p; 
	union age a;
	a.i = 9;
	printf("UNION : %d\t STRUCT : %d\n", sizeof(a), sizeof(p));   //plus 2 bytes are included for padding on int and float 
	return 0;
}
	

