#include <stdio.h>
//#include<string.h>

int main(){

printf( "String:\t");
char string[100] ;
fgets(string,100,stdin);
printf( "String:\t");
puts(string);
printf( "\n");

return 0;
}

