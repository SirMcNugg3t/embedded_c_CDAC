#include <stdio.h>
 int main(){
 
 	int arr[] = { 10 , 20 , 30 , 40 }  ;
 	int a = 9;
	int *p1 = &a ;
 //	int *p2 = &arr[3] ;
 	printf(" %lu" , &a );
 	printf(" %lu" , p1 );
 //	printf(" %d" , (void*)p2 - (void*)p1  );

 	
 	
 	return 0;
 }
 	 
 	 
