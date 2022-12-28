#include<stdio.h>
void add()
{
	
	int a,b,c;
	printf("Enter the first number to add : \n");
	scanf("%d",&a);
	printf("Enter the second number to add: \n");
	scanf("%d",&b);
	c=a+b;
	printf("Total %d",c);
	
}
int main()
{
	add();
	return 0;
}
