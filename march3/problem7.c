#include <stdio.h>

// Implement a 1 - 5 counter using the static variable 

int count() {
    int count = 0;  
    count += 1;            
    return count;          
}

int staticcount() {
    static int staticcount = 0;  
    staticcount += 1;            
    return staticcount;          
}


int main() {

	printf(" While using static variable:\n"); 
    printf("%d\n", staticcount());  
    printf("%d\n", staticcount());
    printf("%d\n", staticcount());
    printf("%d\n", staticcount());
    printf("%d\n", staticcount());



	printf(" Without using static variable:\n"); 
    printf("%d\n", count());  
    printf("%d\n", count());  
    printf("%d\n", count());  
    printf("%d\n", count());  
    printf("%d\n", count());  

    return 0;
}

