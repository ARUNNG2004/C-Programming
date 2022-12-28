#include <stdio.h>
void main()
{
int marks[5]={10,20,30,40,50};
int i=0,counter=0;
printf("Enter a number less than 5\n");
scanf("%d",&counter);
    for(i=0 ;i<counter ; i++)
    {
        if counter > 4
        {
        break
            }
        printf("%d\n",marks[i]);
    }
}
