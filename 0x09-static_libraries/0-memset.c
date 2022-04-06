#include "main.h"
/**
 * _memet - fill memory with a contant byte
 * @n: byte filled 
 * @s: memory char pointer 
 * @b: constant char variable 
 * Return: the pointer to dest
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
