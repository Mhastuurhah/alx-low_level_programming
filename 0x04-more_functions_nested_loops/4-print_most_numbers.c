#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - cprint numbers btw 0 and 9 without 2 and 4
 * Return: Nothing
 */
void print_most_numbers(void)
{
    int i;
    
	for (i = 48; i <= 57; i++)
    {
        if ((i == 50) || (i == 52))
            continue;
		_putchar(i);
    }
	_putchar('\n');
}
