#include<stdio.h>
#include<conio.h>
#define f(x)

main()

{
	int x,y;
	printf(" Sayi giriniz: ");
	scanf("%d", &x);
	y=f(x)
	printf("Sonuc=%d",y);
	return 0;
}

int f(int x1)
{
	int c,t;
	c=3*x1-1;
	t=g(c);
	return t;
}

int g(int c1)
{
	int z;
	z=c1*c1+2*c1-3;
	return z;
	
}
