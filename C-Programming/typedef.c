#include<stdio.h>
typedef struct student
{
	char *name;
	int age;
	float per;
}student;

int main()

{ 
 typedef int INTEGER;
	INTEGER a;
	student o;
	a=100;
	printf("\nA : %d",a);
	
	

	o.name="Arun";
	o.age=18;
	o.per=99.99;
	printf("\n Name = %s",o.name);
	printf("\n Age = %d",o.age);
	printf("\n Percentage = %f",o.per);

	return 0;
}
