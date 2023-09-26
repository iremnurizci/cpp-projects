#include <stdio.h> 
 
void fact(int *j){
 static int s=1;
 if(*j!=0){
   s=s*(*j);
   *j=*j-1;
   fact(j); 
   *j=s;
 }
}

int main(void) {
 int i=5;
 fact(&i); printf("%d ",i);
 return 0;
}

