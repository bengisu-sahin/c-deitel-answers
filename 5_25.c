#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float findmin(float, float, float);

int main()
{
	float a, b, c;
	printf("Enter three numbers:");
	scanf_s("%f%f%f", &a, &b, &c);

	printf("Minumum is: %f", findmin( a, b, c));

	return 0;
}
float findmin(float a, float b, float c) {
	float min;
	min = a;
	if (b < min) {
		min = b;
	}
		
    if (c < min) {
		min = c;
	
	}
	return min;

}