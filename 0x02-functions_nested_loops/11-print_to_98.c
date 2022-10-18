#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - write a function that prints all natural numbers from n to 98
 * @n: integer value
 * Return: returns void
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			if (n == 98)
			{
				printf("%d", n);
				break;
			}
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			if (n == 98)
			{
				printf("%d", n);
				break;
			}
			printf("%d, ", n);
			n--;
		}
	}
	else
		printf("%d", 98);

	printf("\n");
}
