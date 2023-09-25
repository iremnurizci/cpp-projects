#include<stdio.h>
main()
{
int a;
printf("Sayi giriniz:");
scanf("%d",&a);
switch(a){
case 1: printf("\nGirilen Sayi=%d",a);
printf("\nGirilen sayinin 3 fazlasi=%d",a+3);
break;
case 2: printf("\nGirilen Sayi=%d",a);
printf("\nGirilen sayinin 3 kati=%d",a*3);
break;
case 3: printf("\nGirilen Sayi=%d",a);
break;
default: printf("\nGirilen sayi 1,2,veya 3 degildir!!!");
}
}
