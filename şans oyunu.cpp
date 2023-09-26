#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
int rollDice(void);
int main()
{ 
   int gameStatus, sum, myPoint;
   srand( time( NULL ) );
   sum = rollDice(  );
switch( sum ) {
    case 7: case 11: 
       gameStatus = 1;
       break;
    case 2: case 3: case 12: 
       gameStatus = 2;
       break;
    default: 
       gameStatus = 0;
       myPoint = sum;
       printf( "Oyuncunun kazanacagi zar: %d\n", myPoint );
       break;
   }while ( gameStatus == 0 ) {  
      sum = rollDice(  );

      if ( sum == myPoint )     
         gameStatus = 1;
      else
         if ( sum == 7 )         
            gameStatus = 2;
   }
   if ( gameStatus == 1 )
      printf( "Oyuncu kazanadi\n" );
   else
      printf( "Oyuncu kaybettti\n" );
   getch();
   return 0;
}int rollDice(void) //rollDice fonksiyonu argüman almamaktadýr.
{	            //Bu sebepten, fonksiyon parametresi void kullanýlmýþtýr.   		
   int die1, die2, workSum;
   die1 = 1 + ( rand() % 6 );
   die2 = 1 + ( rand() % 6 );
   workSum = die1 + die2;
   printf( "Oyuncunun attigi zar: %d + %d = %d\n", die1, die2, workSum );
   return workSum;
}

