#include<stdio.h>
int main()
{
	int salamnt;
	printf("Please enter sales amount: \n");
	scanf("%d",&salamnt);
	if(salamnt<=5000)
		printf("The commision is : 0");
	else if(salamnt>5000 && salamnt<=10000)
		printf("The commision is : %d",salamnt*2/100);
	else if(salamnt>10000)
		printf("The commision is : %d",salamnt*5/100);
	return 0;
}
