#include<stdio.h>
int main()
{
	int awt;
	printf("Enter the withdraw amount :");
	scanf("%d",&awt);
	printf("\nEnter the 100rs notes      :%d",(awt/100));
	printf("\nEnter the 50rs notes     :%d",(awt%100)/50);
	printf("\nEnter the 10rs notes     :%d",((awt%100)%50)/10);
	printf("\nEnter the 5rs coin or note :%d",(((awt%100)%50)%10)/5);
	return 0;
}
