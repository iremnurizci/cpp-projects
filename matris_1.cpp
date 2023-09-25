#include<stdio.h>
#include<conio.h>
main()
{
int a[4][4];
int i,j;

for(i=0;i<4;i++)
{
for(j=0;j<4;j++)
{
printf("%d %d elemani giriniz:",i,j);
scanf("%d",&a[i][j]);
}
}
for(i=0;i<4;i++)
{
for(j=0;j<4;j++)
{
if(i<j) printf("\nMatrisin ust ucgen elemani=%d",a[i][j]);

}
}
getch();
}