#include<stdio.h>
#include<stdlib.h>
#include<math.h>
double conversecs(int, int, int);
int main() {
	int a, b, c;
	printf("enter the time in minutes hours seconds:");
	scanf_s("%d:%d:%d", &a, &b, &c);
	printf("Distance from 12 pm: %.2f", conversecs(a, b, c));

	system("pause");
}double conversecs(int a, int b, int c) {
	double result;
	result = 3600 * a + 60 * b + c;
	return result;
}