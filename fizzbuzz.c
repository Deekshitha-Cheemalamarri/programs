#include<stdio.h>
int main()
{
	int i;
	for(i=1;i<=100;i++)
	{
		if(i%3==0)
		{
			printf("Fizz ");
		}
		else if(i%5==0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ",i);
		}
	}
	return 0;
}
