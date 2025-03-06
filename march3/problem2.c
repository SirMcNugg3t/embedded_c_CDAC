#include <stdio.h>
//Write a C program to swap 2 numbers without using a 3rd variable 

int main()
{
    int a = 100;
    int b = 450;
    printf("\nBefore Swapping:\nA = %d\tB = %d\n",a,b);
    b = b +a;  
    a = b- a;
    b = b -a;
    printf("\nAfter Swapping:\nA = %d\tB = %d\n:",a,b);
    return 0;
}
