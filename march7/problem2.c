#include<stdio.h>

int get_num(void) {
    int num;
    printf("Number: ");
    scanf("%d", &num);  // Read the integer number
    return num;
}

char get_char(void) {
    char character;
    
    // To consume any leftover newline character in the input buffer
    getchar();  // This reads and discards the newline character

    printf("Letter: ");
    scanf("%c", &character);  // Read the character input
    return character;
}

void repeat_print(int num,char letter){
    if (num <= 0)return;
    printf("%c \n",letter);
    return repeat_print(num-1,letter);
}
    
	


int main() {
    int num = get_num();    // Get number from user
    char a = get_char();    // Get character from user
    int i = 0;
    
    repeat_print(num,a);
    printf(" \n");
    		
    return 0 ; 
   
   
}

