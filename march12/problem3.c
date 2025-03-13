#include <stdio.h>
/*
int main() {
    char buffer[50];
    FILE *file = fopen("sample.txt", "r");

     First, write something to the file
    
    if (file == NULL) {
        perror("Error opening file for writing");
        return 1;
    }
    fprintf(file, "Hello, this is a test!");  // Write sample content
    fclose(file);
	
	
    // Now, open the file for reading
    file = fopen("sample.txt", "r");
    if (file == NULL) {
        perror("Error opening file for reading");
        return 1;
    }

    // Read from the file
    size_t bytesRead = fread(buffer, 1, 50, file);
    buffer[bytesRead] = '\0';  // Null-terminate the string

    printf("Read from file: %s\n", buffer);

    fclose(file);
    return 0;
}

*/


#include<stdio.h>
int main(){
	char buffer[50];
	FILE *file = fopen("sample.txt","r");
	fread(buffer,1,50,file);

	printf("%s",buffer);
	fclose(file);
	return 0;
	}
