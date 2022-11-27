#include<stdio.h>
void add()
{
	
	int a,b,c;
	printf("\n\tEnter Number for a");
	scanf("%d",&a);
	printf("\n\tEnter Number for b");
	scanf("%d",&b);
	c=a+b;
	printf("\n\tTotal %d",c);
	
}
int main()
{
	int n,i;
	printf("\nEnter the limite ");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{	
	
		printf("\n\t\tAdding Time: %d ",i);
		add();
		
	}
	
	return 0;
}
