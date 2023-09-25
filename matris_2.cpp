#include<stdio.h>
#include<conio.h>
main()
{
int a[5][5],i,j,top=0,n=0,enk;

for(i=0;i<5;i++)
{
for(j=0;j<5;j++)
{
printf("\n%d.%d eleman=",i,j);
scanf("%d",&a[i][j]);
if(i+j>2 && a[i][j]%2==0)
{
printf("\n%d cifttir",a[i][j]);
}
if(i<j && a[i][j]>0)
{
top=top+a[i][j];
n=n+1;
}
if((i==0)&& (j==0)) enk=a[0][0];
if(i==j) {
if (enk>=a[i][j])
enk=a[i][j];
} //end if
} //end for(j)
} // end for(i)
printf("\nust ucgendeki pozitif elemanlarin ortalamasi=%f\n",(float)top/n);
printf("\nKosegendeki en kucuk eleman=%d\n",enk);

for(i=0;i<5;i++){
for(j=0;j<5;j++){
if(i>j) a[i][j]+=enk;
}
}
for(i=0;i<5;i++){
for(j=0;j<5;j++){
printf("%4d",a[i][j]);
}
printf("\n\n");
}
}
