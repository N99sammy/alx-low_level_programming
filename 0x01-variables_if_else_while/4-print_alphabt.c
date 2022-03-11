#include <stdio.h>

/**
 *  *  *main - entry point
 *   *   *Description: random number in n +ve/-ve
 *    *    *Return: 0 on success
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if ((ch != 'e') && (ch != 'q'))
			putchar(ch);
	}
	putchar('\n');
	return (0);
}

