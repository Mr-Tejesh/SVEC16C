#include<stdio.h>
int main()
{
	int amnt;
	printf("Please enter the amount: \n");
	scanf("%d",&amnt);
	printf("Number of hundred notes are: %d",amnt/100);
	amnt=amnt%100;
	printf("Number of fifty notes are: %d",amnt/50);
	amnt=amnt%50;
	printf("Number of ten notes are: %d",amnt/10);
	return 0;
}
