#include<stdio.h>
#include<conio.h>
main()
{
int i,j,a[3][5],enb,tut,top,top1;
float ort,ort1;

for(i=0;i<3;i++) //�r�n
{
top=0;
for(j=0;j<5;j++) //g�n
{
printf("\n%d.nolu urunun %d.ci gundeki miktarini gir",i+1,j+1);
scanf("%d",&a[i][j]);
top=top+a[i][j];
if(i==0 && j==0)
{
enb=a[i][j];
tut=j+1;
} // end if

if(enb<=a[i][j])
{
enb=a[i][j];
tut=j+1;
} // end if
} // enf for (j)

ort=(float)top/5;

printf("\n%d.nolu urunun ortalama uretim miktari=%f",i+1,ort);
printf("\n%d.nolu urunun en cok uretim miktari=%d ve %d.ci gun",i+1,enb,tut);
} //end for (i)
for(i=0;i<5;i++) //gun
{
top1=0;

for(j=0;j<3;j++) //urun
{
top1+=a[j][i];
}
printf("\n%d.ci gundeki toplam uretim miktari=%d",i+1,top1);
ort1=(float)top1/3;
printf("\n%d.ci gunun ortalama uretim miktari=%f",i+1,ort1);
}

}