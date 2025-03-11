#include <stdio.h>
#include<string.h>

struct course{
	char name[10];
	int credits;
};

struct student{
	char name[10];
	int age ;
	struct course courses[10];
};


int main(){
	
	struct course IoT = {"IoT", 1};
	struct course OS = {"OS", 3};
	struct course C = {"C", 4};
	struct course DSA = {"DSA", 2};
	struct student Yash={"Yash" , 23, {IoT, OS, DSA}};
	
	for(int i =0; i < 10; i++)
	{
		printf(" Courses :  %s ", Yash.courses[i].name);
	}

	
	return 0;
}
