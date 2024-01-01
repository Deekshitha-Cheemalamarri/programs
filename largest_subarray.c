#include<stdio.h>
int main()
{
	int arr[5];
	int i,j;
	for(i=0;i<5;i++)
	{
      scanf("%d",&arr[i]);
    }
    int max=0,sum;
    for(i=0;i<(5/2)+1;i++)
    {
    	sum=0;
    	for(j=0;j<3;j++)
    	{
    	
    		sum=sum+arr[i+j];
		}
		if(max<sum)
		{
			max=sum;
		}
		printf("sum=%d\n",sum);
	}
	printf("%d",max);
}
