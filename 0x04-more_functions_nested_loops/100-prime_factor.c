#include <stdio.h>

/**
 * main - Entry point
 * Return: Nothing
 */

int main(void)
{
	long num = 612852475143;
	int i;

	for (i = 2; i <= num; i++)
	{
		if (num % i == 0)
		{
			num = num / i;
			i--;
		}
	}

	printf("%d\n", i);
	return (0);
}
