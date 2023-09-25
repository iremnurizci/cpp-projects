#include <iostream>
 using namespace std;
 int faktoriyel (int N){ 
if(N<=1) return 1;
 else { printf("Sayimiz %d : \n",N); 
return N*faktoriyel(N-1);}
 } int main ()
 { int N, sonuc; 
 cout<<"\nFaktoriyeli Alinacak Sayiyi Giriniz : "; 
cin>>N; 
 sonuc=faktoriyel(N); 
 printf( "%d in Faktoriyeli %d dir", N,sonuc);
  cout<<endl<<endl; return(0); 
system("pause"); } 
