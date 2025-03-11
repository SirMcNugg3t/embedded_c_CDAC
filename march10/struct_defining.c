#include<stdio.h>

struct rgb{
	int red;
	int blue;
	int green;
	};

int main(){
	
	struct rgb pixel;
	pixel.red = 255;
	pixel.blue = 0;
	pixel.green = 10;
	
	printf(" %d\t %d\t %d\t \n",pixel.red,pixel.blue,pixel.green);
	
	
	return 0;
}
