#include <stdio.h>

int print_putchar(void);
int print_alphabet();

int print_alphabet()
{
	char str[]={a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z}

	int i;
	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
