#include<stdio.h>
struct student
{
	char *name;
	int age;
	float per;
};
void add()
{
	 struct mark
	 {
	 	int m1,m2,m3;
	 	
	 }s;
	 s.m1=99;
	 s.m2=99;
	 s.m3=99;
	printf("\nMark 1- %d",s.m1);
	printf("\nMark 2- %d",s.m2);
	printf("\nMark 3- %d",s.m3);

}
int main()
{
	
	struct student o;
	o.name="Arun";
	o.age=18;
	o.per=99.99;
	printf("\n Name = %s",o.name);
	printf("\n Age = %d",o.age);
	printf("\n Percentage = %f",o.per);
	add();
	return 0;
	
	return 0;
}
