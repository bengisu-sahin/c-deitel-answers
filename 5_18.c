#include<stdio.h>
#include<stdlib.h>
char even(int);
int main()
{
	int a;
	printf("Enter an integer - Press -1 to exit:");
	scanf_s("%d", &a);
	if (a != -1) {
		printf("%ch", even(a));
	}
	char even(int x)
	{
		if (x % 2 == 0)
			return even;
		else
			return odd;
	}
}