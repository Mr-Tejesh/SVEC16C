#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,x,y;
	printf("Enter values of a, b, x, y:\n");
	scanf("%d %d %d %d",&a,&b,&x,&y);
//	printf("%d\n%d\n%d\n%d\n",a,b,x,y);
	float i,ii,iii,iv;
	i = (a*x+b)/(a*x-b);
	ii = 2.5*log(x)+cos(32)+(pow(x,2)+pow(y,2));
	iii = pow(x,5)+10*pow(x,4)+8*pow(x,3)+4*x+2;
	iv = a * exp(x*y);
	printf("%f\n%f\n%f\n%f",i,ii,iii,iv);
	return 0;
}
