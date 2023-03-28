#include <stdio.h>
#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer
 * Return: returns nothing
 */

void print_number(int n)
{
	unsigned int num1, num2;
	int i;
	int j = 1;

	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}

	num1 = n;
	num2 = num1;

	if (num1 > 9)
	{
		while (num1 >= 10)
		{
			j = j * 10;
			num1 = num1 / 10;
		}
		_putchar((num2 / j) + '0');
		j = j / 10;

		for (i = j; i >= 1; i = i / 10)
			_putchar((num2 / i) % 10 + '0');
	}
	else
		_putchar(n + '0');
}
