#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
	int i,eleman,dizi[10],counter=0,yedek;
	srand(time(NULL));
	for (i = 0; i < 10; i++) {
		eleman = 1 + rand() % 1000;
		dizi[i] = eleman;
	}
	printf("%s%30s\n", "Deger", "Toplam Karakter Sayisi");
	for (i = 0; i < 10; i++) {
		yedek = dizi[i];
		while (yedek != 0) {
			yedek = yedek/10;
			counter++;
		}

		printf("%d%22d\n", dizi[i], counter);
	}

	system("pause");
}