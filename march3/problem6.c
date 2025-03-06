#include <stdio.h>

//Difference between local vs global variable 

int a = 10;  //global variable 

int main() 
{
    printf("a = %d \n" , a);  // finds in global scope 
    
    int a = 20; 
    printf("a = %d\n" , a);  // finds in local scope 
    
    
    return 0;
}

