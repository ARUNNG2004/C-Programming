/*no return with argument function in c
*/
#include<stdio.h>
void add();
int main()
{
	int as;
	
	as=add(int,int);
	printf("\nTotal: %d",as);
	return 0;
}
void add()
{
	int a,b,c;
	printf("Enter the number for a&b");
	scanf("%d%d",&a,&b);
	c=a+b;
	return c ;
}
