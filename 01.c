#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void choosepath(int pathweight[][10], int row, int column, int arr[10][10]);

int main() {
	int i, j, row, column,element,index=0,x;
	int arr[10][10] = { 0 };
	int pathweight[10][10]= { 0 };
	printf("Bengisu Sahin || 152120191064 || bngsshn@gmail.com\n");
	printf("First Semester || Final\n\n");
	printf("Enter number of rows (0 to exit): ");
	scanf_s("%d", &row);
	printf("Enter number columns: ");
	scanf_s("%d", &column);

	if (row == 0 || column== 0) {
		printf("You exit the program.\n");
	}
	else if (row < 0 || column < 0) {
		printf("You entered inappropriate value.Your process is end.\n");
	}
	else{
	srand(time(NULL));
	for (i = 0; i < row; i++) {
		for (j = 0; j < column; j++) {
			element = rand() % 10;
			arr[i][j] = element;
		}
	}
	
	for (j = 0; j < column; ++j) {
		pathweight[0][j] = arr[0][j];	
	}

	for (i = 1; i < row; i++) {
		for (j = 0; j <= column-1; j++) {
			index=j;
			if(j!=0 && j != column-1 ){
				if (pathweight[i - 1][j - 1] < pathweight[i - 1][index]) {
					index = j - 1;
				}
				if (pathweight[i - 1][j + 1] < pathweight[i - 1][index]) {
					index = j + 1;
				}
			
			}
				
			if (j == 0) {
				if (pathweight[i - 1][j] < pathweight[i - 1][j + 1])
				{
					index = j;
				}
				else {
					index = j + 1;
				}
			}
			if (j == column - 1) {
				if (pathweight[i - 1][j] < pathweight[i - 1][j - 1])
				{
					index = j;
				}
				else {
					index = j - 1;
				}
			}

			x= arr[i][j] + pathweight[i - 1][index];
			pathweight[i][j] = x;
		}
		
	}
	
	choosepath(pathweight, row, column,arr);
	}
	system("pause");
}
void choosepath(int pathweight[][10], int row, int column, int arr[10][10]) {
	void display(int temp[10][10], int arr[10][10]);
	int  i,k=row,j,nomcol=0,temp[10][10];
	row = row - 1;
	for (j = 0; j < column - 1; j++) {
		if (pathweight[row][j+1] < pathweight[row][nomcol])
			nomcol = j+1;
	}
	temp[row][nomcol] = 99;
	
	for (row-1; row > 0; row--)
	{
			if(nomcol!=0 && nomcol!=column-1) {
				if (pathweight[row][nomcol] == arr[row][nomcol] + pathweight[row-1][nomcol + 1])
					nomcol = nomcol + 1;
		
				if (pathweight[row][nomcol] == arr[row][nomcol] + pathweight[row-1][nomcol - 1] )
					nomcol = nomcol - 1;
		
	}
			if (nomcol == 0) {
				if (arr[row][nomcol] + pathweight[row-1][nomcol + 1] == pathweight[row][nomcol])
					nomcol = nomcol + 1;
			}

			if (nomcol == column-1) {
				if (arr[row][nomcol] + pathweight[row-1][nomcol - 1] == pathweight[row][nomcol])
					nomcol = nomcol - 1;
			}
			temp[row-1][nomcol] = 99;
	}

	display(temp, arr,k,column);

}void display(int temp[10][10], int arr[10][10],int k,int column) {
	int i, j,sum=0;
	for (i = 0; i <= k-1; i++) {
		for (j = 0; j < column; j++) {
			if (temp[i][j] == 99) {
				printf("[");
				printf(" %d ", arr[i][j]);
				printf("]");
				sum += arr[i][j];
			}
			else {
				printf(" %d ", arr[i][j]);
				
			}
		}
		printf("\n");
	}
	printf("\n");
	printf("Sum of weights: %d\n", sum);
}