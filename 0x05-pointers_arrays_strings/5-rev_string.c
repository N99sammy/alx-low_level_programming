#include "main.h"
/**
 * rev_string - prints reversed string, followed by a new line
 * @s: pointer to the string to print
 * Return: void
*/

void rev_string(char *s)
{

int l, i, h;
char t;

for (l = 0; s[l] != '\0'; l++)
;

i = 0;

h = l / 2;

while (h--)
{
	t = s[l - i - 1];
	s[l - i - 1] = s[i];
	s[i] = t;
	i++;
}

}
