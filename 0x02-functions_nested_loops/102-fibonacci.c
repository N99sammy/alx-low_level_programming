#include <stdio.h>
/**
 * main - main block
 * Description:
 * fibonacci sequence(excluded), followed by a new line
 * Return: 0
 */
int main(void)
{
	int i = 0;
	long int a = 0, b = 1, c;

	while (i < 50)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%lu", c);

		if (i < 49)
		{
			printf(", ");
		}
		i++;
	}
	putchar('\n');
	return (0);
}
