//program to check whether a number is positive or negative 
#include <stdio.h>
int main()
{
	int a=0;
	printf("enter the number:");
	scanf("%d",&a);
	if (a>0)
	printf("a is positive.");
else if(a<0)
{
	printf("a is negative.");
}
	return 0;
}