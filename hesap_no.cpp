#include <stdio.h>
#include <conio.h>
main()
{
int hesapno, i, kontrol=0;
double limit, bakiye, yeniLimit;

for ( i = 1; i <= 10; i++ )
{
printf( "\nMusterinin hesap numarisini giriniz:" );
printf("\n(Eger musteriyi atlamak isterseniz"
" lutfen -1 giriniz)");
scanf( "%d", &hesapno);

if(hesapno==-1) break;

printf( "\nMusterinin limit ve bakiye bilgisini"
" giriniz: (Bosluk ile))" );
scanf( "%lf%lf", &limit,&bakiye);

yeniLimit = limit / 2.0;

printf( "%d nolu hesap icin yeni kredi limitiniz"
" %.2f'dir\n", hesapno, yeniLimit );

if ( bakiye > yeniLimit )
{
printf( "Bu hesap icin yeni kredi limit asilmistir.\n" );
}
}

getch();

}
