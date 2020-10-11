#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,nfaktoriyel;
   nfaktoriyel=1;
   printf("Negatif olmayan bir sayi giriniz:");
   scanf("%d",&n);

   while(n>0){
    nfaktoriyel*=n;
    n=n-1;
   }
   printf("%d",nfaktoriyel);


    return 0;
}
