#include <stdio.h>
#include "main.h"

/**
 * more_numbers - print 10 times the numbers, from 0 to 14
 * Return: nothing
 */

void more_numbers(void)
{
	int i;
	int j = 0;

	while (j < 10)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}

		j++;
		_putchar('\n');
	}
}

