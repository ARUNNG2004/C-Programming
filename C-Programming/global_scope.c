#include<stdio.h>
void display();
int a=120;
int main()
{
	display();
	return 0;
}
void display()
{
	a++;
	printf("\n The values are %d",a);
}
