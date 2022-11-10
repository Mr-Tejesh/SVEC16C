#include<stdio.h>
int main()
{
	int a=0,b=1,sum,digs,i;
	printf("Please enter no.of digits: ");
	scanf(" %d",&digs);
	printf(" %d %d",a,b);
	for(i=0;i<=digs;i++)
	{
		sum=a+b;
		a=b;
		b=sum;
		printf(" %d",sum);
	}
	return 0;
}
