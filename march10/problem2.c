#include <stdio.h>
#include <string.h>
#define pi 3.1415

struct circle{
	int radius;
	char color[20];
	};

void change_circle(struct circle* c ,int radius, char color[20]){
	c->radius = radius;
	strcpy(c->color,color);
}

void print_circle(struct circle c){
	printf(" RADIUS : %d\t, COLOUR : %s \n ",c.radius,c.color);
}
	
int main(){
	struct circle o;
	o.radius = 5;
	strcpy(o.color,"Green");
	print_circle(o);
	change_circle(&o,7,"Red");
	print_circle(o);return 0;
}
	
	
	
