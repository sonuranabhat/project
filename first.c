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
void program()
{
	int n;
	int j,i;
	printf("\n\t\t\t Enter the Number of Process: ");
	scanf("%d",&n);
	struct K u[n],temp;
	printf("\n\n\t\t\t Enter name of students:\n");	
	for(i=0;i<n;i++)
	{	
		printf("\n\t\t\t Enter number %d  name :",i+1);
		scanf("%s",u[i].name);
		printf("\n\t\t\t Enter number %d quantity number:",i+1);
		scanf("%d",&u[i].number);
	}
	printf("\n Entered name and quantity:\n");
	printf("\n\t\t\t\tName \t\tQuantity\n");
	for(i=0;i<n;i++)
	{
		printf("\n\n\t\t\t\t%s \t\t %d",u[i].name,u[i].number);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(u[j].number<u[j+1].number)
			{			
			temp=u[j];
			u[j]=u[j+1];
			u[j+1]=temp;	
			}
		}
	}
	printf("\n Sorted data by the quantity: \n\n");
	printf("\t\t\t\tName \t\t Quantity\n");
	for(i=0;i<n;i++)
	{
		printf("\n\n\t\t\t\t%s \t\t %d",u[i].name,u[i].number);
	}
	printf("\n");
	printBill(u,n); 
}
int main()
{
	int a;
	printf("\n\n\t\t WELCOME!!!!!!!!!!!!!!!!!!!!!!WELCOME!!!!!!!!!!!!!!!!!!!!!!WELCOME!!!!!!!!!!!!!!!!!!!!!!WELCOME ");
	printf("\n\n # YOUR OPTIONS: ");
	printf("\n\n 1. Enter the program");
	printf("\n\n 2. Exit");
	printf("\n\n \t\t\t Enter your choice (1,2): ");
	scanf("%d",&a);
	switch(a)
	{
		case 1: program();
				break;
		case 2:exit(0);
				break;
		default:printf("\n You have entered wrong choice\n\n Press any key to continue ::\n\n ");		
	}
}
