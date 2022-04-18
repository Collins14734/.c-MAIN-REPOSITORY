#include <stdio.h>
int main()
{
	int x,sum=0;
	for(x=1;x<=10;x++)
	{
		printf("%d\n",x);
		sum=sum+x;
	}
	printf("sum=%d\n",sum);
	
	return 0;
}