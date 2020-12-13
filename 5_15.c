#include<stdio.h>
#include<stdlib.h>
#include<math.h>
double hypotenuse(double s1,double s2);
int main() {
	printf("Sides: %f and %f. Hypotenuse: %f.\n", 3., 4., hypotenuse(3.0, 4.0));
	printf("Sides: %f and %f. Hypotenuse: %f.\n", 5., 12., hypotenuse(5.0, 12.0));
	printf("Sides: %f and %f. Hypotenuse: %f.\n", 8., 15., hypotenuse(8.0, 15.0));
}
 double hypotenuse(double s1, double s2) {
	return sqrt (s1* s1 + s2 * s2);
}