#include <stdio.h>
/**
 * main - main block
 * Description:
 *
 * Return: 0
 */
int main(void)
{
	int a = 0, b = 1, c = 0;
	int sum = 0;

	while (c < 4000000)
	{
		next = a + b;
		a = b;
		b = c;
		if (c % 2 == 0)
			sum += next;
	}
	printf("%i\n", sum);
	return (0);
}
