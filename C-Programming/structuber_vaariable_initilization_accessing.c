#include<stdio.h>
struct student
{
	char *name;
	int age;
	float per;
};
int main()
{
	
	struct student o={"Arun",19,90};;
	printf("\n Name = %s",o.name);
	printf("\n Age = %d",o.age);
	printf("\n Percentage = %f",o.per);
	return 0;	
	return 0;
}
