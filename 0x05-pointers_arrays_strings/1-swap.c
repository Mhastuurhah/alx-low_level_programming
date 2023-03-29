#include <stdio.h>
#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * Description: swaps integer values a and b
 * @*a: integer a
 * @b: integer b
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int swap;
	
	swap = *a;
	*a = *b;
	*b = swap;
}
