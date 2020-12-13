#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double roundTointeger(double );
double roundToTenths(double );
double roundToHundreths(double );
double roundToThousandths(double );

int main() {
	double x;
	printf("Enter a number:\n");
	scanf_s("%lf", &x);
	printf("Original Number:%f\tRandomed to greater integer:%f\n",x,roundTointeger(x));
	printf("Original Number:%f\tRound to tenths:%f\n", x, roundToTenths(x));
	printf("Original Number:%f\tRound to hundreths :%f\n", x, roundToHundreths(x));
	printf("Original Number:%f\tRound to thousandths:%f\n", x, roundToThousandths(x));
}
double roundTointeger(double x) {
	return floor(x + .5);
}
double roundToTenths(double x) {
	return floor(x * 10 + .5) / 10;
}
double roundToHundreths(double x) {
	return floor(x * 10 + .5) / 100;
}
double roundToThousandths(double x) {
	return floor(x * 10 + .5) / 1000;
}


