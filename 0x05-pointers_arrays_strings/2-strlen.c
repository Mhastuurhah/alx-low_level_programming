#include <stdio.h>
#include "main.h"

/**
 * _strlen - returns the length of the string
 * Description: returns string length
 * @s: char s
 * Return: j
 */

int _strlen(char *s)
{
	int i, j;

	j = 0;

	for (i = 0; i < s[i]; i++)
	{
		j++;
	}

	return (j);
}
