#include<stdio.h>
int main()
{
	int a;
	char c;
	char name[50];
	printf("Enter the value for a");
	scanf("%d",&a);
	printf("\n a : %d",a);
	printf("\nEnter The Character :");
	fflush(stdin);
	c=getchar();
	putchar(c);
	printf("\n Enter the name");
	fflush(stdin);
	gets(name);
	puts(name);	
	return 0;
}
