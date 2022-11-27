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
	struct student *ptr=&o;
	printf("\n Name = %s",ptr->name);//==(*ptr).name;
	printf("\n Age = %d",ptr->age);
	printf("\n Percentage = %f",ptr->per);
	return 0;	

}
