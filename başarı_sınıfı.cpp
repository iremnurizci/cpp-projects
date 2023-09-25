#include<stdio.h>
#include<conio.h>
main()
{
	int passes=0,failures=0,student=1,result;
	while (student<=10)
	{
		printf("Sonuc gir(1=gecti,2=kaldi)");
		scanf("%d", &result);
	if(result==1)
	passes=passes+1;
	else
	failures=failures+1;
	student=student+1;
	}
	printf("Gecenler: %d\n", passes);
	printf("Kalanlar: %\n", failures);
	
	if(passes>8)
	printf("Yuksek Basari\n");
	getch();
	return 0;
}