#include "main.h"

/**
 * _islower - function that checks for lowercase character
 * @c: integer variable
 * Return: returns 1 if c is lower otherwise 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
