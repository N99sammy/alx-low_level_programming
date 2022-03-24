#include "main.h"

/**
 * reverse_array - reverses order of arrays
 * @a: an array of integers
 * @n: nuber of elements in the array
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i, j, k;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		k = a[i];
		a[i] = a[j];
		a[j--] = k;
	}
}
