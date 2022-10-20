#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: integer value
 * Return: return 1 if c is uppercase, otherwise 0
 */

int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (0);
	else
		return (1);
}
