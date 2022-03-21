#include "main.h"
/**
 * swap_int - swaps two integers
 * @a: first integer
 * @b: second integer
 * return: no returns
 */
void swap_int(int *a, int *b)
{
	int c;
	int j;

	c = *a;
	j = *b;
	*a = j;
	*b = c;

}
