#include<stdio.h>
void add()
{
	
	int a,b,c;
	printf("Enter Number for a : \n");
	scanf("%d",&a);
	printf("Enter Number for b : \n");
	scanf("%d",&b);
	c=a+b;
	printf("Total %d\n",c);
	
}
int main()
{
	int n,i;
	printf("Enter the limit to add upto from 1 : ");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		printf("Adding Time: %d \n",i);
	}
	add();	
	return 0;
}
