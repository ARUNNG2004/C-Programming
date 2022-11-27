#include<stdio.h>
int main()
{
	char c[10];
	printf("Enter the string");
	//scanf("%s",c);
	gets(c);
	printf("%s",c);	
	return 0;
}
