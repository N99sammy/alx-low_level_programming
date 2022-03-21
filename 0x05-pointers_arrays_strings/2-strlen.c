#include "main.h"

/**
 * _strlen - returns length of a string by pointer
 * @s: input char pointer
 *
 * Return: length of a string
 */
int _strlen(char *s)
{
	int n = 0;

	while (*s != '\0')
	{
		s++;
		n++;
	}
	return (n);
}
