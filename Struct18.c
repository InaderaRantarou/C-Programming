#include <stdio.h>
int main()
{	// create 1 struct Book (name, author,price)
	struct Book
	{
		char name[20];
		char author[20];
		int price;
	};
	// Registrator 1 value struct

	struct Book Book1;

	// input data and print that value

	printf("Input name: ");
	gets(Book1.name);
	printf("Input author: ");
	gets(Book1.author);
	printf("Input price: ");
	scanf("%d",&Book1.price);

	printf("Name: %s, author: %s, price: %d",
			Book1.name,Book1.author,Book1.price);
}
