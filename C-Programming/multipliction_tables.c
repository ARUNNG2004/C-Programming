#include<stdio.h>
int main()
{
	int i,t,n;
	printf("Enter the Table Number");
	scanf("%d",&t);	
	printf("Enter the Limite");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\n %d x %d = %d",i,t,(t*i));
	}
	return 0;
}
