#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Enter a number:\n",x);
    scanf("%d",&x);
    printf("%d\n",--x);
    printf("%d\n\n\n",x);

    printf("Enter a number:\n",&x);
    scanf("%d",&x);
    printf("%d\n",x--);
    printf("%d\n",x);
    return 0;
}
