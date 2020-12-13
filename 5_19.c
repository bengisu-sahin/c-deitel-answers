#include<stdio.h>
#include<stdlib.h>
void construct(int, int);
int main() 
{
	int side1, side2;
	printf("Enter rectangular's sides:");
	scanf_s("%d%d", &side1, &side2);
	construct(side1, side2);

	system("pause");
}
void construct(int side1,int side2) {
	int x, y;
	for (x = 1; x <= side1; x++) {
		for (y = 1; y <= side2; y++) {
			printf("*");
		}
		printf("\n");
	}
}