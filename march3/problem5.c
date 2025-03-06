#include <stdio.h>

//Print 5 integers in a row and then 5 more in 5 different rows without using a for loop 

int a = 10;  

int main() 
{
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    printf("%d \t%d \t%d \t%d \t%d\n" , a,a,a,a,a);  
    printf("%d\n" , a); 
    printf("%d\n" , a); 
    printf("%d\n" , a); 
    printf("%d\n" , a); 

    
    return 0;
} 
