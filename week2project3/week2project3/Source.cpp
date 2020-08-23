#include<stdio.h>
int main()
{
	int x, i, j;
	printf("Enter number : ");
	scanf_s("%d", &x);
	for (i = 1; i <= x; i++)
	{
		for (j = 1; j <= x; j++)
		{
			if (i == 1 or j == 1 or i == x or j == x)
			{
				printf("*");
			}
			else 	printf(" ");

		}

		printf("\n");
	}



	return 0;
}