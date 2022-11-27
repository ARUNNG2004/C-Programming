#include<stdio.h>
int main()
{
	int a=10,*p;
		p=&a;
		printf("\nThe value of a is :  %d",a);
		printf("\nThe Address of a is :  %d",&a);
		printf("\nThe value of p is :  %d",p);
		printf("\nThe Address of p is :  %d",&p);
		printf("\nP Dereferencing:  %d",* p);
	return 0;
}
