#include <stdio.h>
#include <conio.h>
main()
{
double faiz;
double anapara;
double oran;
int gunler;
printf("Anaparayi girin (cikis icin -1): ");
scanf("%lf",&anapara);
while(anapara != -1)
{
printf("Faiz oranini girin: ");
scanf("%lf",&oran);
printf("Kac gunluk faiz: ");
scanf("%d",&gunler);
faiz=(anapara*oran*gunler)/365;
printf("Faiz ucreti %.2f$ dir.\n\n",faiz);
printf("Anaparayi girin (cikis icin -1): ");
scanf("%lf",&anapara);
}
getch();
}