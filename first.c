#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
struct K
{
	int number;
	char name[10];	
};
void printBill(struct K s[],int x)
{	
	int i,p;
	float price;
	printf("\n\n\t\t\t Do you want to print Bill:");
	printf("\n\n\t\t\t Enter 'Y' for yes and 'N' for NO: ");
	scanf("%s",&p);
    if(p=='Y' or p=='y')
	{
    	printf("\n\t\t\t Enter the price of One gift :");
     	scanf("%f",&price);
		printf("\n\t\t\t Total bill in sorted form: ");
		printf("\n\n\t\t\t\t Name \t\t Quantity \t Price \n ");
     	for(i=0;i<x;i++)
		 {
			 printf("\n\n\t\t\t\t %s \t\t %d \t\t %.2f ",s[i].name,s[i].number,s[i].number*price);	 
     	 }
	 	printf("\n\n\t\t\t Thank you:) \n\n\t\t\t Have a Great Day !!");
	 	
	 }
	 else
	 {
	 	printf("\n\t\t\t Thank you:)");
	 }
}
