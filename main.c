#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b;
   a=1;
   printf("KARENÝN BÝR KENARÝNÝ GÝRÝN:");
   scanf("%d",&b);
   while(a<=b){
    printf("*\n\t");
    a=a+1;
   }

    return 0;
}
