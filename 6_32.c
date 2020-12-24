/*Implementation of Selection Sort Algorithm*/

#include<stdio.h>
#include<stdlib.h>

void selectionsort(int arr[], int size);
void display(int arr[], int size);

int main() {
	int size, i, arr[50];
	printf("Enter number of elements in array:");
	scanf_s("%d", &size);
	printf("Enter elements:");
	for (i = 0; i <= size - 1; i++)
		scanf_s("%d", &arr[i]);

	selectionsort(arr, size);
	display(arr, size);
}void selectionsort(int arr[], int size) {
	int min, i, j,swap;
	for (i = 0; i < size - 1; i++) {
		min = i;
		for (j = i + 1; j < size; j++) {
			if (arr[j] < arr[min])
				min = j;
		}
		if (min != i) {
			swap=arr[i];
			arr[i] = arr[min];
			arr[min] = swap;
		}
	
	}
	
}void display(int arr[],int size) {
	int i;
	printf("Array in ascending order\n");
	printf("------------------------\n");
	for (i = 0; i < size; i++)
		printf("%d\n", arr[i]);
}