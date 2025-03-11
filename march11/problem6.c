#include<stdio.h>
#include<stdint.h>


typedef struct{
	uint8_t low : 3;
	uint8_t mid : 3;
	uint8_t high : 2;	
}bit_field;

int main(){
	
	bit_field b;
	
	b.low = 6;	// 110   
	b.mid = 5;	// 101
	b.high = 3;	// 11
		
	int res  =  (b.high << 6) | (b.mid<<3) |b.low   ;
	printf("%d\n%X\n",res,res);	//11101110 (238)
		
	return 0 ;
}
