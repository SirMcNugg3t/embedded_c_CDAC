#include <stdio.h>
//typecasting int vs float 

int main()
{
	int radius = 5;
	float pi = 3.141592;
	
	
	float area = (float)radius*pi*2;
	printf("\nArea of a circle using float as datatype : %f\n", area);
	
	int area1 = (int)pi*2*radius;
	printf("Area of a circle using float as datatype : %i\n", area1);
	
	printf("\n\nHence some accuracy is lost due to typecasting\n");

	
	
	
}
