/*no return with argument function in c
*/
#include<stdio.h>
void add(int,int);
int main()
{
	add(25,25);	
	return 0;
}
void add(int a,int b)
{
	int c;
	c=a+b;
	printf("\n\t\tTotal %d",c);
}
