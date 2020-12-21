/*perfect numbers(1-1000)*/
#include<stdio.h>
#include<stdlib.h>
int perfectnum(int);

int main() {
	int j;
	for (j = 1; j <= 1000; ++j) {
		perfectnum(j);
	}
	
}
int perfectnum(int n) {
	int i,sum=0;
	for (i = 1; i < n; ++i) {
		if (n % i == 0)
			sum += i;
	}
	if (sum == n) {
		printf("%d  ---", n);
		for (i = 1; i < n; ++i) {
			if (n % i == 0)
				printf("%2d ", i);

		}
		printf("\n\n");
	}
	
		
}