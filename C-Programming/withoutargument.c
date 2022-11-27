/*no return without argument function in c
1.function declaration
2.function definition
3.function calling
*/

#include<stdio.h>
void add();
int main()
{
	add();
	return 0;
}
void add()
{
	
	int a,b,c;
	printf("\n\tEnter Number for a");
	scanf("%d",&a);
	printf("\n\tEnter Number for b");
	scanf("%d",&b);
	c=a+b;
	printf("\n\t\tTotal %d",c);
	
}

