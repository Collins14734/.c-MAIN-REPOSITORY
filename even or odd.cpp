//program to determine whether a number is even or odd
#include <stdio.h>
int main()
{
int number;
printf("Enter the number to check even or odd\n");
scanf("%d",&number);
if(number%2==0);
{
	// print even

printf("The number is even");
}

{
	// print odd
printf("the number is odd");	
}
	
	return 0;
}