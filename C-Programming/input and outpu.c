#include <stdio.h>
void main()
{
int marks[5]={10,20,30,40,50};
int i=0,counter=0;
printf("Enter a number less than 5");
scanf("%d",&counter);
    for(i=0 ;i<counter ; i++)
    {
        printf("%d\n",marks[i]);
    }
}