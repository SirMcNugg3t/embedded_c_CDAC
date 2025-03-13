#include <stdio.h>

int main()
{
    int i, x;
    char file[50], filemerge[50]; 
    char ch;
    
    
    printf("Enter number of files to merge: ");
    scanf("%d", &x);
    
    FILE *fs[x], *ft;
    
  
    printf("Enter name of file which will store contents of files: ");
    scanf("%s", filemerge);
    
    
    ft = fopen(filemerge, "w");
    if (ft == NULL) {
        printf("Error opening file %s for writing.\n", filemerge);
        return 1;
    }

    
    for (i = 0; i < x; i++) {
        printf("Enter name of input file %d: ", i + 1);
        scanf("%s", file); 
        
        fs[i] = fopen(file, "r"); 
        if (fs[i] == NULL) {
            printf("Error opening file %s for reading.\n", file);
            return 1;
        }

        
        while ((ch = fgetc(fs[i])) != EOF) {
            fputc(ch, ft); 
        }

        fclose(fs[i]);
    }

    fclose(ft); 

    printf("Files merged successfully into %s\n", filemerge);

    return 0;
}
