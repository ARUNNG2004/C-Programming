#include<stdio.h>
struct student
{
	char *name;
	int age;
	float per;
};
void display(struct student o)
{
	
	printf("\n Name = %s",o.name);
	printf("\n Age = %d",o.age);
	printf("\n Percentage = %f",o.per);
	
}

int main()
{
	struct student o={"blue",30,50};
	display(o);
	return 0;
}
