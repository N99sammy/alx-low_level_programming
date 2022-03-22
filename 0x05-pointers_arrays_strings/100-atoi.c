#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */int _atoi(char *s)
{
	int i = 0;
	unsigned int h = 0;
	int g = 1;

	for (i = 0; s[i] != '\0'; ++i)
	{
		if (i[s] == '-')
		{
			g *= -1;
		}
		if (i[s] >= '0' && i[s] <= '9')
		{
			h = h + s[i] - '0';
			if ((*(s + (i + 1)) >= '0') && (*(s + (i + 1)) <= '9'))
				h *= 10;
			else
				break;
		}
	}
	return (h * g);
}
