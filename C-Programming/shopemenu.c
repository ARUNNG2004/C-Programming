#include<stdio.h>
int main()
{
	int ch,qty;
	
	printf("\n\tMenu Card");
	printf("\n\t\t1.COFFEE  	RS:15");
	printf("\n\t\t2.TEA         RS:10");
	printf("\n\t\t3.COLD COFFEE RS:25");
	printf("\n\t\t4.MILK SHAKE  RS:50");
	printf("\n\n ENTER YOUR CHOICE  :");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("\nYour have selected coffee");
			printf("\nEnter your quantity");
			scanf("%d",&qty);
			printf("\n Total Amount : %d",(qty*15));
			break;
		case 2:
			printf("\nYour have selected TEA");
			printf("\nEnter your quantity");
			scanf("%d",&qty);
			printf("\n Total Amount : %d",(qty*10));
			break;
		case 3:
			printf("\nYour have selected Cold Coffee");
			printf("\nEnter your quantity");
			scanf("%d",&qty);
			printf("\n Total Amount : %d",(qty*25));
			break;	
		case 4:
			printf("\nYour have selected Milk Shake");
			printf("\nEnter your quantity");
			scanf("%d",&qty);
			printf("\n Total Amount : %d",(qty*50));
			break;	
		default :
			printf("\n\Invalid Product you selected");
			break;
	}
	
	return 0;
	
	
}
