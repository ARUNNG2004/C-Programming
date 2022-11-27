/*no return with argument function in c
*/
#include<stdio.h>
void add(int,int);
int main()
{
	int a,b;
	printf("Enter the number for a&b");
	scanf("%d%d",&a,&b);
	add(a,b);	
	return 0;
}
void add(int x,int y)
{
	int c;
	c=x+y;
	printf("\n\t\tTotal %d",c);
}
