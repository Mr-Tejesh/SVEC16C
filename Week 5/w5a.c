#include<stdio.h>
int main()
{
	int a,b;
	char ops;
	printf("Please enter the numbers a and b:");
	scanf(" %d %d",&a,&b);
	printf("\nPlease enter the operation symbol:");
	scanf(" %c",&ops);
	switch(ops)
	{
		case '+':
			printf("The result is: %d\n\n",a+b);
			break;
                case '-':
                        printf("The result is: %d\n\n",a-b);
                        break;
                case '*':
                        printf("The result is: %d\n\n",a*b);
                        break;
                case '/':
                        printf("The result is: %d\n\n",a/b);
                        break;
                case '%':
                        printf("The result is: %d\n\n",a%b);
                        break;
		default:
			printf("Please enter the valid operator\n\n");
			break;
	}
	return 0;
}
