#include <stdio.h>
#include <conio.h>
main()
{
int dizi[6];
int enk,i;
printf("Dizinin elemanlarini giriniz\n");
for(i=0;i<6;i++){
printf("Dizinin %d. elemaninini giriniz :\n",i);
scanf("%d",&dizi[i]);
}
enk=dizi[0];
for(i=1;i<6;i++)
{
if(enk>dizi[i])
{
enk=dizi[i];
}
} 
printf("minimun eleman %d dir",enk); 
getch();
}
