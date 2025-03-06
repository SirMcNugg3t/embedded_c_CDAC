#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n = 945, i = 0, reverse = 0, rem;


    int length = log(abs(n)) + 1;

    while (n!=0) {
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n = n / 10;
    }

    printf("Reversed number: %d\n", reverse);
    return 0;
}

