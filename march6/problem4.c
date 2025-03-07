#include <stdio.h>

void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

void reverse_array(char array[], int array_size)
{
    for (int i = 0; i < array_size / 2; i++)
    {
        swap(&array[i], &array[array_size - 1 - i]);  // Swap the characters
    }
}

int main()
{
    char name[11] = "SirMcNugg3t";
    reverse_array(name, 11);  // Reverse the array
    printf("%s\n", name);       // Print the reversed array
    return 0;
}

