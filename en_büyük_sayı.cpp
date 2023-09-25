#include<stdio.h>
int main()
{
int a,b,c,enbuyuk;
printf("uc farkli tam sayi girin\n");
scanf("%d%d%d", &a, &b, &c);
	
if (a<c && b<c)
{
	enbuyuk=c;
}
else if (c<a && b<a)
{
	enbuyuk=a;
}
else if (a<b && c<b)
{
	enbuyuk=b;
}
printf("%d", enbuyuk);
}
