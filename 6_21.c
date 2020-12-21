#include<stdio.h>
#include<stdlib.h>
int yenikoltuk1(int[]);
int yenikoltuk2(int[]);
int main() {
	char ch;
	int cevap, i,s,j;
	int koltuk1[10] = { 0 };
	int dolu[10] = { 1,1,1,1,1,1,1,1,1,1 };
	
	while (1) {
		printf("\nSigara icilen yer icin 1e||Sigara icilmeyen yer icin 2ye basin:");
		scanf_s("%d", &cevap);
		if (cevap == 1) {
			if (koltuk1[4] == dolu[4] && koltuk1[3] == dolu[3] && koltuk1[2] == dolu[2] && koltuk1[1] == dolu[1] && koltuk1[0] == dolu[0]) {
				printf("\nBurdaki koltuklar dolu.Diger taraftan rezervasyon yaptirmak ister misiniz?:");
				scanf_s("%ch", &ch);
				if (ch == 'e') {
					s = yenikoltuk2(koltuk1);
					printf("\nKoltuk numaraniz:%d", s);
				}
				else
					printf("\nDiger ucus 3 saat sonra.");
			}
			else {
				for (i = 0; i < 5; ++i) {
					if (koltuk1[i] == 0) {
						koltuk1[i]++;
						printf("\nKoltuk numaraniz:%d", i + 1);
						break;
					}
				}
			}
		}
        else if (cevap == 2) {
			if (koltuk1[5] == dolu[5] && koltuk1[6] == dolu[6] && koltuk1[7] == dolu[7] && koltuk1[8] == dolu[8] && koltuk1[9] == dolu[9]) {
				printf("\nBurdaki koltuklar dolu.Diger taraftan rezervasyon yaptirmak ister misiniz?:");
				scanf_s("%ch", &ch);
				if (ch == 'e') {
					s = yenikoltuk1(koltuk1);
					printf("\nKoltuk numaraniz:%d", s);
				}
				else
					printf("\nDiger ucus 3 saat sonra.");
				
			}
			else {
				for (j = 5; j < 10; ++j) {
					if (koltuk1[j] == 0) {
						koltuk1[j]++;
						printf("\nKoltuk numaraniz:%d", j + 1);
						break;
					}
				}
			}
		}
	}
	system("pause");
}int yenikoltuk1(int koltuk[]) {
	int i = 5;
	for (; i < 10; ++i) {
		if (koltuk[i] == 0) {
			koltuk[i]++;
			return i + 1;
		}
	}
}int yenikoltuk2(int koltuk[]) {
	int i;
	for (i = 5; i < 10; ++i) {
		if (koltuk[i] == 0) {
			koltuk[i]++;
			return i + 1;
		}
	}
}