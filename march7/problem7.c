#include <stdio.h>

struct array_elements{
	int array_size;
	char array[100];
};

struct array_elements input_array()
{
	struct array_elements username;
	printf("Enter Username  ");
	scanf("%s", username.array);
	
	int i = 0;	
	while (username.array[i] != '\0') 
	{
        	i++;
    	}
    	username.array_size = i;  
    	
	
	// username.array_size = sizeof(username.array)/sizeof(username.array[0]);  DOES NOT WORK !!!
	
	return username;
}
	
	
	
void reverse_string(char* string[],int string_size){
	for (int i = 0; i < string_size; i ++)
	{
		string[i] = string[string size -1 -i]
	 
	
	
int main(){
	
	struct array_elements user  = input_array();
	
	printf("String : %s \n Size : %d \n ",user.array,user.array_size );
	return 0;
}
	
	
	



