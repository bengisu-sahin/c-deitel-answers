#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y,z;
    printf("uckenin kenarlarını girin:");
    scanf("%f%f%f",&x,&y,&z);

    if(x*x==(y*y)+(z*z)|| y*y==x*x+z*z || z*z==x*x+y*y)
        printf("dik ucgenin uc kenaridir.");

    else printf("dik ucgenin uc kenari degildir.");

    return 0;
}
