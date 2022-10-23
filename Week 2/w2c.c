#include<stdio.h>
int main()
{
	int pops=8000,l,il,m,w,lm,lw,ilm,ilw;
	m = 0.52*pops;
	w = 0.48*pops;
	l = w;
	il = m;
	lm = 0.35*pops;
	lw = l-lm;
	ilm = m-lm;
	ilw = w-lw;
	printf("Illiterate men are: %d \n Illiterate women are: %d\n\n\n",ilm,ilw );
	return 0;
}
