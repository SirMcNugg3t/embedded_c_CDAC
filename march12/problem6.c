#include<stdio.h>
#include <string.h>

int main(){

	FILE* file1 = fopen("problem4.txt", "r");
	FILE* file2 = fopen("problem6.txt", "w+");

	fwrite(file2, 1, 10000, file1);  

	fclose(file1);
	fclose(file1);
	return 0;
}

