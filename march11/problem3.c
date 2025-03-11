#include<stdio.h>

typedef struct note{
	char name[10];
	char genre[10];
	char author[10];
	int copies_sold;
	float price;
}book;

void get_details( book b){
	printf("Name : %s \n",b.name);
	printf("Genre : %s \n",b.genre);
	printf("Author : %s \n",b.author);
	printf("Copies Sold : %d\n",b.copies_sold);
	printf("Price : $ %0.2f \n",b.price);
}

int main(){
	book quran={"Quran","Comedy","Ali G",69420,9.11};
	get_details(quran);
	return 0 ;
}
	
	
	
