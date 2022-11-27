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
	printf("\nTotal %d",total);
	printf("\nAverage%0.2f",average);
	if (en>=35&&mat>=35&&phy>=35&&che>=35&&cs)
	{
		printf("\nPass");
		
		if (average>=90&&average<=100)
		{
			printf("\nGrade A");
		}
		else if (average>=80&&average<=90)
		{
			printf("\nGrade B");
		}
		else if (average>=70&&average<=79)
		{
			printf("\nGrade C");
		}
		else if (average>=60&&average<=69)
		{
			printf("\nGrade D");
		}
		else if (average>=50&&average<=59)
		{
			printf("\nGrade E");
		}
	}
	else
	{
		printf("\nFail ");
		printf("\nNo grade");
	}
	
}
