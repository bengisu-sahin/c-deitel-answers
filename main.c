#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,sayac;
    sayac=0;
    printf("Bir tamsayi giriniz:\n");
    scanf("%d",&a);
    if(a%10==7)
        sayac++;
    while(a/7==0){
        sayac=sayac+1;

    }
    printf(" %d ",sayac);

    return 0;
}
