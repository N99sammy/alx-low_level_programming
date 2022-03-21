#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: string
 * Return: positive number on success, or EOF on error.
 */
void _puts(char *str)
{

	while (*str != '\0')
	{

	_putchar(*str);
	str++;
	}
	_putchar('\n');
}
