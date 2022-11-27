//find student marks and average and passs
#include<stdio.h>
int main()
{
	int en,mat,phy,che,cs,total;
	float average;
	printf("Enter the number for 5 subjects");
	scanf("%d%d%d%d%d",&en,&mat,&phy,&che,&cs);
	total=en+mat+phy+che+cs;
	average=total/5.0;
	printf("%d",total);
	printf("%f",average);
	if (en>=35&&mat>=35&&phy>=35&&che>=35&&cs)
	{
	printf("Pass");
		
	}
	else
	{
	printf("fail ");
	printf("no grade");
	}
	
}
