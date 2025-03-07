
#include<stdio.h>

void print_array(char arr[],int arr_size,int i)
{
	if  (i == arr_size)    /// i <5 
	{
	return ;
	}
	printf("%c",arr[i]);   
	return print_array(arr,arr_size, i+1);   // i++
}

int main()
{
	char keys[] = "QWERTYUIOP";
	int keys_size = sizeof(keys) / sizeof(keys[0]);
	print_array(keys,keys_size,0);
	
	return 0;
}


    print_array(keys, keys_size, 0);

    return 0;
}

