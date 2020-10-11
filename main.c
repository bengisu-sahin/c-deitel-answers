#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r,cap,cevre,alan,pi;
    pi=3.14159;
    printf("Cemberin yaricapini giriniz:");
    scanf("%f",&r);

     printf("cap: %2f \n",2*r);
     printf("cevre:%2f \n",2*pi*r);
      printf("alan: %2f \n",r*pi*r);

      return 0;
}
