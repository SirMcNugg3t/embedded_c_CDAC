/*
In embedded systems, you often need to control specific bits in a hardware register to enable or
disable features. Write a C program to use bitwise operators to set, clear, and toggle flags in a
register


#include<stdio.h>
#include<stdint.h>

typedef uint8_t reg; 

reg get_reg(){
	reg reg1;
	printf("Input register ( 0 - 255 ): \n");
	scanf("%hhu",&reg1);
	return reg1;
}

void set_bit(reg* r,int bit_index){
	*r = *r | (1 << bit_index);
	printf("Result : %hhu\n",*r);
}
int main(){
	reg status  = get_reg();
	reg* status_pointer = &status;
	set_bit(&status,5);

	return 0;
}


*/


#include <stdio.h>
#include<stdint.h>

unsigned int reg = 0xF0;
int main(){
printf(" Value:  %u\n", reg );
printf(" Set bit 2 :%u\n", reg |= (1 << 2));
printf(" Clear bit 7 :%u\n", reg &= (1 << 7));
printf(" Toggle bit 5:%u\n" ,reg ^= (1 << 5));


	return 0;
}






