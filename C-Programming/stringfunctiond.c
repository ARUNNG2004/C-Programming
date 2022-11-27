#include<stdio.h>
#include<string.h>
int main()
{
	char c[20],a[20];
	char x[]={'A','R','U','N','\0'};
	char y[]={'P','R','O','\0'};
	printf("x :%s",x);
	printf("\nEnter the string");
	//scanf("%s",c);
	gets(c);
	//printf("\nCompare   :%s",strcmp(x,c));
	printf("\nLength  :%d",strlen(c));//String length	
	printf("\nReverse :%s",strrev(c));//String reversed 
	printf("\nUpper   :%s",strupr(c));//uppercase
	printf("\nLower   :%s",strlwr(c));//Lowercase
	printf("\nCopy   :%s",strcpy(a,c));
	strcat(x,y);
	printf("\nCompare   :%s",x);
	return 0;
}
