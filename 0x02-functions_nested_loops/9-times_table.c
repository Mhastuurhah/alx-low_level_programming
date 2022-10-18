#include <stdio.h>
#include "main.h"

/**
 * times_table - a function that prints the 9 times table
 * Return: returns void
 */

void times_table(void)
{
	int num1, num2, mult;

	for (num1 = 0; num1 <= 9; num1++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (num2 = 1; num2 <= 9; num2++)
		{
			mult = num1 * num2;
			if ((mult / 10) > 0)
				_putchar((mult / 10) + '0');
			else
				_putchar(' ');

			_putchar((mult % 10) + '0');
			if (num2 == 9)
				break;
			
			_putchar(',');
			_putchar(' ');
	
		}
		_putchar('\n');
	}

}
