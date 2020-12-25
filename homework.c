/*Find minumum-secmin-thirdmin-average */
#include<stdio.h>
#include<stdlib.h>

int main() {
	int sum = 0, number = 0, counter = 0, min1=2147483647, min2= 2147483647, min3= 2147483647;
	double average;
	printf("Bengisu Sahin  || 152120191064 || bngsshn@gmail.com\n");
	printf("First Semester || Midterm1\n\n");
	printf("Enter some numbers until entered -1:");
	while (number != -1) {
		scanf_s("%d", &number);
		if (number != -1) {
			counter += 1;
			sum += number;
			if (counter == 1)
			{
				min1 = number;
				
			}
			
				if (counter == 2) {
					if (number < min1)
						min1 = number;
					else
						min2 = number;
				}
				if (counter == 3)
				{
					if (number < min1) {
						min3 = min2;
						min2 = min1;
						min1 = number;
					}
					else if (number < min2 && number != min1) {
						if (min2 == min3) {
                            min3 = min2;
							min2 = number;
						}
						else {
							min3 = min2;
							min2 = number;
						}
					}
					else if (number < min3 && number != min2)
						min3 = number;
					else {
						if (min2 == min3) {
							min3 = number;
						}
					}

				}
				
				if (counter > 3) {
					if (min1 == min2) {
						if (number < min1) {
							min2 = number;
							min1 = min1 - min2;
							min2 = min2 + min1;
							min1 = min2 - min1;
						}
						else if (number < min3 && number != min2) {
							min3 = number;
						}
						else {
							if (min3 < number) {
								min2 = min3;
								min3 = number;
							}
						}
						}
						if (min2 == min3) {
							if (number < min2 && number != min1)
								min2 = number;
							else
								min3 = number;
						}

						if (min1 == min3) {
							if (number < min1) {
								min1 = number;
								min2 = min2 - min3;
								min3 = min2 + min3;
								min2 = min3 - min2;
							}

							else if (number < min2 && number != min1) {
								min3 = min2;
								min2 = number;
							}
							else
								min3 = number;

						}
						if (number < min1) {
							min3 = min2;
							min2 = min1;
							min1 = number;
						}
						else if (number < min2 && number != min1) {
							min3 = min2;
							min2 = number;
						}
						else if (number < min3 && number != min2 && number != min1)
							min3 = number;	
				}

			
		}
	}		
	
		average = (double)sum / (double)counter;
		if (counter >= 3) {
			printf("Sum of all numbers: %d\n", sum);
			printf("Average: %.2f\n", average);
			if (min1 == min2 && min3 != min2) {
				printf("Minumum is:%d\nSecond minumum is: %d\n", min1, min3);
			}
			else if (min2 == min3 && min1 != min3) {
				printf("Minumum is:%d\nSecond minumum is: %d\n", min1, min3);
			}
			else if (min1 == min3 && min1 != min2) {
				printf("Minumum is:%d\nSecond minumum is: %d\n", min1, min2);
			}
			else if (min1 == min2 && min2== min3 && min1==min3) {
				printf("Minumum is:%d\n", min1);
			}
			else {
				printf("Minumum is: %d\nSecond minumum is: %d\nThird minumum is: %d\n", min1, min2, min3);
			}
		}
		 if(counter < 3 && number==-1) {
			printf("You entered less than three numbers and You pressed the exit button.Try again.\n");
		}
		 
		
	system("pause");
}