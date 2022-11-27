#include<stdio.h>
int main()
{
int i,n,num,sum=0;
printf("\nEnter the limit");
scanf("%d",&n);

for (i=1;i<=n;i++)
 	{
 		printf("\nEnter the Number");
 		scanf("%d",&num);
		 if (i==0)
 			continue;
 		sum+=num;
 		
	}	
	printf("\nTotal %d",sum);
	return 0;
}
