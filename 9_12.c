#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
	char dizi[20];
	int sayac,i=1;
	printf("Bir kelime giriniz:\n");
	scanf_s("%s", dizi,20);
	sayac = strlen(dizi);
	while (i<=sayac) {
		printf(" ");
		i++;
	}
	printf("%s\n", dizi);
	system("pause");
}