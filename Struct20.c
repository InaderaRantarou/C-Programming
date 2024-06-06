/*
Tao 1 struct food name , price
tao 1 mnang voi struc food
input data for array
in ra food co price lon nhat
*/
#include <stdio.h>
int main()
{
	struct Food
	{
		char name[20];
		int price;
	};	
	
	int size;
	int check;
	printf("Input size: ");
	scanf("%d", &size);
	
	struct Food fod[size];
	for(int i = 0; i < size; i++)
	{	
		printf("input for Food[%d]\n",i);
		printf("Input name: ");
		fflush(stdin);
		gets(fod[i].name);
		printf("Input price: ");
		scanf("%d",&fod[i].price);
	}	
	int position = 0;
	
	for(int i = 1; i < size; i++)
	{
		if(fod[i].price > fod[position].price)
		{
			position = i;
		}
	}
	
	printf("%3s %10s %5s\n","No","Name","Price");
	for(int i = 0; i < size; i++)
	{
		printf("%3d %10s %5d\n",i+1,fod[i].name,fod[i].price);
		
	}
	printf("------------------------------------\n");
	printf("%34d",sum);
	printf("Max price is %s (%d)",fod[position].name,fod[position].price);
}
