#include<stdio.h>
int main()
{
	int num,digs,sum=0;
	printf("Please enter the number:");
	scanf(" %d",&num);
	while(num>0)
	{
		digs=num%10;
		sum=sum+digs;
		num=num/10;
	}
	printf("\nThe sum of digits in number: %d\n",sum);
	return 0;

}
