#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y=1;
    for(x=1;x<=5;x++){
       y*=x;
        printf("%d!= %d\n",x,y);
    }
    return 0;
}
