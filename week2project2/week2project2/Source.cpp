#include<stdio.h>
int main()
{
	int i, input1, input2, x = 1;
	printf("Enter first number : ");
	scanf_s("%d", &input1);
	printf("Enter second number : ");
	scanf_s("%d", &input2);
	printf("Geratest common divisor = ");
	for (i = 2; i <= input1;)
	{
		if (input1 % i == 0 and input2 % i == 0)
		{
			input1 /= i;
			input2 /= i;
			x *= i;
		}

		else i++;

	}
	printf("%d", x);


	return 0;
}