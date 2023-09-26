#include <stdio.h> 
#include <string.h> 

int fonk(char *katar){ 
 int n, i, j, k; 
 k = n = strlen(katar);
 for(i=0; i < k; i++)
   for(j=0; j < i; j++)
     if (katar[j]==katar[i]) {
       n--; break;}
 return n; 
} 
int main(void){ 
 char katar[20]; 
 gets(katar);
 printf("%d",fonk(katar)); 
 return 0; 
} 

