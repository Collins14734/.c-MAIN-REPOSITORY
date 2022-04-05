// program to determine whether a number is divisible by 5 or not
#include <stdio.h>
int main()
{
	int x;
	printf("Enter any number ;\n");
	scanf("%d",&x);
	if((x%5)==0)
		printf("Entered number is divisible be 5");
	else
	{
		printf("Entered number is not");
	}
	
	return 0;
}