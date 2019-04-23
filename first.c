#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
struct A
{	
	int quantity;
	char name[20];
	
};
void printBill(struct A s[],int a)
{	
	float price;
	int i,x;
	printf("\n\n\t\tprint Bill or not :");
	printf("\n\n\t\tEnter 'N' for NO and'Y' for yes::");
	scanf("%s",&x);
    if(x=='Y'){
    
     	printf("\n\n\t\t The price of 1 gift is :");
     	scanf("%f",&price);
		printf("\n\n\t\t\t\t || In order bill of every Students are  ||");
		printf("\n\n\t\t\t\t Name \t\t Quantity \t  Price \n ");
     	for(i=0;i<a;i++){
			 printf("\n\n\t\t\t\t %s \t\t %d \t\t %.2f ",s[i].name,s[i].quantity,s[i].quantity*price);	 
     	 }
	 	printf("\n\n\n\n\n\n\n\n\n	\t\t\t Thank you... \n\n\t\t\t Enjoy your Day !!");
	 	
	 }
	 else{
	 	printf("\n\n Thank you..see you next time \n\n\t\t   !!");
	 }
}

