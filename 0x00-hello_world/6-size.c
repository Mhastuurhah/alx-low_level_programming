#include <stdio.h>

/**
 * main - Entry point
 * Using sizeof() function
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i;
	int j;
	long int k;
	long long int l;
	float m;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of an int: %d byte(s)\n", sizeof(j));
	printf("Size of a long int: %d byte(s)\n", sizeof(k));
	printf("Size of a long long int: %d byte(s)\n", sizeof(l));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(m));
	return (0);
}
