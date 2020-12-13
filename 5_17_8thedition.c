
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int rightTriangle(int, int, int);
int main()
{
	int a, b, c;
	printf("Enter 3 integer:");
	scanf_s("%d%d%d", &a, &b, &c);
	printf("%d", rightTriangle(a, b, c));
}
int rightTriangle(int x, int y,int z) {
	if (x*x + y * y == z * z || y * y + z * z == x * x || x * x + z * z == y * y)
		return 1;
	else
		return 0;
}