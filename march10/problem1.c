#include <stdio.h>

struct rectangle{
	float length;
	float breadth;

};

/*
struct result{
	float area;
	float perimeter;
};

struct result rectangle_attributes(struct rectangle r){
	// struct result ans;
	ans.area = r.length * r. breadth;
	ans.perimeter = r.length + r. breadth;
	return ans;
}
*/
void rectangle_attributes(struct rectangle r){
	
	printf("AREA : %.2f \n PERIMETER : %.2f\n" ,2 * (r.length + r.breadth), r.length*r.breadth);
}
	

int main(){

	struct rectangle pqrs = { 4,7 };
	rectangle_attributes(pqrs);
	
	
	
	return 0;
}
