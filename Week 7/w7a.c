#include<stdio.h>
int main()
{	
	int a[10],i,max,min;
	printf("\n Please enter 10 numbers: ");
	for(i=0;i<10;i++)
		scanf(" %d",&a[i]);
	min=a[0];
	max=a[9];
	for(i=0;i<10;i++)
		if(a[i]<min)
			min=a[i];
		else if(a[i]>max)
			max=a[i];
	printf("\nSmallest number: %d\nLargest number: %d\n",min,max);
	return 0;
}
