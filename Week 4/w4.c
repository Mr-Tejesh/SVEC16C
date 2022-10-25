#include<stdio.h>
#include<stdlib.h>
int main()
{
	int choice,cp,sp,pl;
	char age,health,place,sex,rep='y';
	printf("\n\n\t\t_____WELCOME TO TEJESH SOLUTIONS_____\n\n");
	printf("\t\tTo find profit/loss please enter \"1\"\n");
	printf("\t\tTo find insurance please enter \"2\"\n");
	scanf("%d",&choice);
	
	{
		if(choice==1)
		{
			printf("\n\n\t\tWelcome to PROFIT FINDER\n");
			printf("\t\tPlease enter cost price:");
			scanf("%d",&cp);
			printf("\t\tPlease enter selling price:");
			scanf("%d",&sp);
			pl = cp-sp;
			if(pl>0)
			{
				printf("\n\t\tOh!Oh! You've incurred a loss of amount : %d/-\n\n",pl);
			}
			else if(pl<0)
        	        {
                	        printf("\n\t\tCongrats! You've got a profit of amount : %d/-\n\n",abs(pl));
	                }
 			else if(pl==0)
	                {
        	                printf("\n\t\tUfff! You've got your investment back with 0 profit or loss\n\n");
                	}
			else
			{
				printf("\n\t\tPlease enter valid values\n\n");
			}
		}
		else if(choice==2)
		{	
			printf("\t\tWelcome to Insurance finder\n\n\n");
			printf("\t\tIs the person age is in between 25 and 35(y/n):");
			scanf(" %c",&age);
                	if(age=='y')
			{
				printf("\n\t\tIs the person male of female(m/f):");
				scanf(" %c",&sex);
				printf("\n\t\tDoes the person lives in village or city(v/c):");
				scanf(" %c",&place);
				printf("\n\t\tIs the person health is excellent(y/n):");
				scanf(" %c",&health);
				if(sex=='m' && place=='c' && health=='y')
				{
					printf("\n\t\tThe person is ELIGIBLE for INSURANCE.\n\t\tCan be insured with Rs.4 per thousand with a maximum policy amount of 2 Lakhs.");
				}
				else if(sex=='f' && place=='c' && health=='y')
				{
                	                printf("\n\t\tThe person is ELIGIBLE for INSURANCE.\n\t\tCan be insured with Rs.3 per thousand with a maximum policy amount of 1 Lakh.");
				}
				else if(sex=='m' && place=='v' && health=='n')
				{
					printf("\n\t\tThe person is ELIGIBLE for INSURANCE.\n\t\tCan be insured with Rs.6 per thousand with a maximum policy amount of 10000.");
				}
				else
				{
					printf("The person is NOT ELIGIBLE for INSURANCE");
				}
			}
			else
			{
				printf("\n\t\tThe person is NOT ELIGIBLE for INSURANCE");
			}
		}
		else
		{
			printf("\t\tNo system assigned to entered value\n\t\tPress \"1\" for Profit finder\n\t\tPress \"2\" for Insurance finder\n\n");
		}
	}
	
		printf("\n\n\t\t_____END OF THE SYSTEM_____\n\n");
	return 0;
}

              
