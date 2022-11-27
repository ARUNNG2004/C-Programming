#include<stdio.h>
int main()
{
 	int i,j;
 	for (i=0;i<=4;i++)
 	{
 		for (j=0;j<=4;j++)
 		{
 			printf("*");
		 }
		 printf("\n");
	}
	printf("\n--------------END-------------\n");
	for (i=0;i<=4;i++)
 	{
 		for (j=0;j<=i;j++)
 		{
 			printf("*");
		 }
		 printf("\n");
	}
	printf("\n--------------END-------------\n");
	for (i=0;i<=4;i++)
 	{
 		for (j=5;j<=1;j--)
 		{
 			printf("*");
		 }
		 printf("\n");
	}
	
	
	return 0;
}
