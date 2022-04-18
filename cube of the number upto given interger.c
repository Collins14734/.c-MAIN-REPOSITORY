#include <stdio.h>
int main()
{
	int y,number;
	printf("Enter the numberof term =");
	scanf("%d",&number);
	printf("\n*cube of number upto %d*\n",number);
	for(y = 1; y <=number;y++)
		printf("number is %d and cube of the %d is %d\n",y,y,y*y*y);
	return 0;
}