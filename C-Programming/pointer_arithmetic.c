#include<stdio.h>
int main()
{
	int a=10;
	int *p,*r;
	p=&a;
	r=p+1;
	printf("\n Size of Intege %d",sizeof(a));
	printf("\n p Value %d",p);
	printf("\n r Value %d",r);

	return 0;
}
