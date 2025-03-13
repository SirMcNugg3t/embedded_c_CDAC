#include <stdio.h>
#include <string.h>

int main(){
	char buffer[60];
	FILE* file = fopen("problem4.txt", "w+");
	printf("Enter some text: ");
	fgets(buffer, sizeof(buffer), stdin);  

	fwrite(buffer, 1, strlen(buffer), file);  

	fclose(file);
	return 0;
}
	
