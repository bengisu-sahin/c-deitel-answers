#include<stdio.h>
int main(void)
{
    int hesapno;
    float bakiye,topharcama,yenibakiye,topkredi,limit;

    printf("Hesap No giriniz(cikis icin -1 e basin):\n");
    scanf("%d",&hesapno);

    while(hesapno!=-1){
    printf("ilk bakiyeyi girin:\n");
     scanf("%f",&bakiye);
    printf("Toplam harcamalari girin:");
      scanf("%f",&topharcama);
     printf("Toplam kredileri girin:");
      scanf("%f",&topkredi);
     printf("Kredi limitini girin: ");
         scanf("%f",&limit);

       yenibakiye=bakiye+topharcama-topkredi;
       printf("yeni bakiye:\t%.2f\n",yenibakiye );

        if (yenibakiye > limit )
            {printf("limit asildi\n\n");
        }
        else {
        printf("asilmadi\n");}


       /*tekrar*/
        printf("Hesap No giriniz (cikis icin -1 e basin):\n");
        scanf("%d",&hesapno);


    }

    return 0;

}
