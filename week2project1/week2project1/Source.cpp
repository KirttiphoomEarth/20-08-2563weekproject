#include<stdio.h>
int main()
{
	int i, input, x;
	printf("Enter number : ");
	scanf("%d", &input);
	printf("Factoring Result : ");
	for (i = 2; i <= input; i++)
	{
		while (input % i == 0)
		{
			printf("%d ", i);
			input = input / i;
			if (input > 1) {

				printf("x ");
			}
		}

	}
	return 0;
}
