#include <stdio.h>

int main() {
    FILE *sourceFile, *destinationFile;
    char sourcePath[100], destinationPath[100];
    char ch;

    printf("Enter source file path: ");
    scanf("%s", sourcePath);

    printf("Enter destination file path: ");
    scanf("%s", destinationPath);

    sourceFile = fopen(sourcePath, "r");
    if (sourceFile == NULL) {
        printf("Cannot open source file.\n");
        return 1;
    }

    destinationFile = fopen(destinationPath, "w");
    if (destinationFile == NULL) {
        printf("Cannot open destination file.\n");
        fclose(sourceFile);
        return 1;
    }

    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);
    }

    printf("File copied successfully.\n");

    fclose(sourceFile);
    fclose(destinationFile);

    return 0;
}

