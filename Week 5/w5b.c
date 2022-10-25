#include<stdio.h>
int main()
{
	int clas,sf,gm;
	printf("Please enter class(1/2/3) and subject failed:");
	scanf(" %d %d",&clas,&sf);
	switch(clas)
	{
		case 1:
			if(sf<=3)
				printf("\n5 grace marks can be given per subject\n");
			else
				printf("\nNo grace marks\n");
			break;
                case 2:
                        if(sf<=2)
                                printf("\n4 grace marks can be given per subject\n");
                        else
                                printf("\nNo grace marks\n");
			break;
                case 3:
                        if(sf<=2)
                                printf("\n5 grace marks can be given per subject\n");
                        else
                                printf("\nNo grace marks\n");
			break;
		default:
			printf("Please enter valid class");
			break;
	}
	return 0;
}
