#include<stdio.h>
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	
	
}
int main()
{
	int a,b;
	printf("\nEnter The Value Of A & B:");
	scanf("%d%d",&a,&b);
	printf("\Before swap A : %d | B : %d",a,b);
	swap(&a,&b);
	printf("\After swap A : %d | B : %d",a,b);
	return 0;
}
