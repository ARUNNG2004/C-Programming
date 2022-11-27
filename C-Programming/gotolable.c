//goto lable 
#include<stdio.h>
int main()
{
	int i=0;
	arun:
	printf("\n%d",i);
	i++;
	if (i<5)
	{
		goto arun;
	}
	printf("\nEnd");
	return 0;
}
