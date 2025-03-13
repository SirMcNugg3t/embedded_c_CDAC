#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Usage: %s output.txt file1.txt file2.txt ...\n", argv[0]);
        return 1;
    }

    FILE *outfile = fopen(argv[1], "w");
    if (outfile == NULL) {
        perror("Error opening output file");
        return 1;
    }

    char buffer[1024];
    size_t bytesRead;

    for (int i = 2; i < argc; i++) {
        FILE *infile = fopen(argv[i], "r");
        if (infile == NULL) {
            perror("Error opening input file");
            continue;
        }

        while ((bytesRead = fread(buffer, 1, sizeof(buffer), infile)) > 0) {
            fwrite(buffer, 1, bytesRead, outfile);
        }

        fclose(infile);
    }

    fclose(outfile);
    printf("Files merged successfully into %s\n", argv[1]);
    return 0;
}

