#include <stdio.h>
#include<stdlib.h>

double ucretHesapla(double);
 int main()
{
	double sure1, sure2, sure3;
	printf("Uc musterinin kaldiklari saatlerini giriniz:");
	scanf_s("%lf %lf %lf", &sure1, &sure2, &sure3);
	printf("ARABA\tSAAT\tUCRET\n");
	printf("%d\t%f\t%.2f\n", 1, sure1, ucretHesapla(sure1));
	printf("%d\t%f\t%.2f\n", 2, sure2, ucretHesapla(sure2));
	printf("%d\t%f\t%.2f\n", 3, sure3, ucretHesapla(sure3));
}
double ucretHesapla(double x) {
	if (x <= 3)
		return 2;

	if (x > 3 && x< 24)
		return 2 + 0.5*(x - 3);

	if (x == 24)
		return 10;
}