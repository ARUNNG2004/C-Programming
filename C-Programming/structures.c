#include<stdio.h>
struct student
{
	char *name;
	int age;
	float per;
};
int main()
{
	struct student o;
	o.name="Arun";
	o.age=18;
	o.per=99.99;
	printf("\n Name = %s",o.name);
	printf("\n Age = %d",o.age);
	printf("\n Percentage = %f",o.per);
	return 0;
}
