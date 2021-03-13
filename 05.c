#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void line(char arr[51][51], int a, int b);
void parabola(char arr[51][51], int a, int b,int c);
void circle(char arr[51][51], int a, int b,const int r);

int main() {
	int x, y, shapeno, a, b ,c , r;
	char arr[51][51];

	for (x = 0; x < 51; x++) {
		for (y = 0; y < 51; y++) {
			arr[x][y] = '\0';
		}
	}
	printf("Bengisu Sahin || 152120191064 || bngsshn@gmail.com\n");
	printf("First Semester || Final\n\n");
	printf("Which shape would you like to draw ?\n");
	printf("1.Line\n2.Parabola\n3.Circle\n4.Exit\n");
	scanf_s("%d", &shapeno);

	if (shapeno == 1) {
		printf("Line formula is y = ax+b\n");
		printf("Please enter coefficients a and b:\n");
		scanf_s("%d", &a);
		scanf_s("%d", &b);

		line(arr, a, b);
	}
	if (shapeno == 2) {
		printf("Parabola formula is y = ax^2 + bx + c\n");
		printf("Please enter coefficients a , b and c:\n");
		scanf_s("%d%d%d", &a, &b, &c);

		parabola(arr, a, b, c);
	}
	if (shapeno == 3) {
		printf("Circle formula is (x-a)^2+(y-b)^2=r^2\n");
		printf("Please enter center's coordinates (a,b) and radius:\n");
		scanf_s("%d%d%d", &a, &b, &r);
		r = r * r;
		circle(arr, a, b, r);
	}
	if (shapeno == 4) {
		printf("You exit the program.\n");
		
	}

	system("pause");
}void line(char arr[51][51], int a, int b) {
	int x, y, yy;
	for (x = -25; x < 25; x++) {
		yy = a * x + b;
		for (y = -25; y < 25; y++) {
			if (y == yy) {
				arr[-y + 25][x + 25] = '*';
			}
			if (y == 0 ) {
				arr[-x + 25][y + 25] = '|';
			}
			if (x == 0) {
				arr[-x + 25][y + 25] = '-';
			}
		}
	}
	printf("\n\n");
	for (x = 0; x < 51; x++) {
		for (y = 0; y < 51; y++) {
			printf("%c", arr[x][y]);
		}
		printf("\n");
	}
}void parabola(char arr[51][51], int a, int b, int c) {
	int x, y, yy;
	for (x = -25; x < 25; x++) {
		yy = a * x*x + b*x + c;
		for (y = -25; y < 25; y++) {
			if (y == yy ) {
				arr[-y + 26][x + 26] = '*';
			}
			if (y == 0 && y != yy) {
				arr[-x + 25][y + 25] = '|';
			}
			if (x == 0 && y != yy) {
				arr[-x + 25][y + 25] = '-';
			}
		}
	}
	printf("\n\n");
	for (x = 0; x < 51; x++) {
		for (y = 0; y < 51; y++) {
			printf("%c", arr[x][y]);
		}
		printf("\n");
	}
}void circle(char arr[51][51], int a, int b, const int r) {
	int x, y;
	for (x = -25; x < 25; x++) {
		for (y = -25; y < 25; y++) {
	
			if( r == (x - a) *(x - a) + (y - b) *(y - b)) {
				arr[-y + 25][x + 25] = '*';
			}
			else if (y == 0) {
				arr[x + 25][y + 25] = '|';
			}
			if (x == 0) {
				arr[x + 25][y + 25] = '-';
			}
		}
	}
	printf("\n\n");
	for (x = 0; x < 51; x++) {
		for (y = 0; y < 51; y++) {
			printf("%c", arr[x][y]);
		}
		printf("\n");
	}
}