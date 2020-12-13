#include<stdio.h>
#include<stdlib.h>
void fillCharacter(int, int,char);
int main()
{
	int s1, s2;
	char ch;
	printf("Enter two integer:");
	scanf_s("%d%d", &s1, &s2);
	printf("Enter a symbol:");
	scanf_s(" %c",&ch);
	fillCharacter(s1, s2, ch);
	system("pause");
}
void fillCharacter(int s1, int s2,char ch)
{
	int i, j;
	for (i = 1; i <= s1; i++) 
	{
		for (j = 1; j <= s2; j++)
		{
			printf("%c", ch);
		}
		printf("\n");
	}
	
} 
  
