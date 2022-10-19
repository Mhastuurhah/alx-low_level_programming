#include <stdio.h>
#include "main.h"

/**
 * print_times_table - a function that prints the n times table
 * @n: accepts n integer
 * Return: returns void
 */

void print_times_table(int n)
{
	int num1, num2, mult;

	if (n >= 0 && n <= 15)
	{
		for (num1 = 0; num1 <= n; num1++)
		{
			_putchar('0');

			for (num2 = 1; num2 <= n; num2++)
			{
				_putchar(',');
				_putchar(' ');

				mult = num1 * num2;
				if (mult <= 99)
					_putchar(' ');
				if (mult <= 9)
					_putchar(' ');

				if (mult > 99)
				{
					_putchar((mult / 100) + '0');
					_putchar(((mult / 10)) % 10 + '0');
				}
				else if (mult <= 99 && mult >= 10)
				{
					_putchar((mult / 10) + '0');
				}
				_putchar((mult % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
