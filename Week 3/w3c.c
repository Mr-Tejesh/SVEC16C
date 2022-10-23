#include<stdio.h>
#include<stdlib.h>
int main()
{
	int asci;
	char c;
	printf("Please enter the character here :");
	scanf("%c",&c);
	asci = c;
	if ((asci>=0 && asci<=47)||(asci>=58 && asci<=64)||(asci>=91 && asci<=96)||(asci>=123 && asci<=127))
		printf("The character you entered is a special character and its ASCII value is %d\n\n",asci);
	else if(asci>=65 && asci<=90)
                printf("The character you entered is a capital letter and its ASCII value is %d\n\n",asci);
	else if(asci>=97 && asci<=122)
		printf("The character you entered is a small letter and its ASCII value is %d\n\n",asci);
	else if(asci>=48 && asci<=57)
		printf("The character yoy entered is a number and its ASCII value is %d\n\n",asci);
	else
		printf("All the characters present on keyboard contain some value.\nIf you do not get a value, u might have entered bunch of characters\n\n");
	return 0;

}
