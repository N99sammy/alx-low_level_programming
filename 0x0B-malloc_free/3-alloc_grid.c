#include "main.h"
#include <stdlib.h>

/**
 *  **aloc_grid - creates a 2d array of ints
 * @width : width of mattrix
 * @length: length of matrix
 * Return: pointer to the created matrix (success)
 * or NULL (error)
 */
int **alloc_grid(int width, int height)
{
 int **array;
 int i = 0;
 int j = 0;
 int k = width;
 int p = height;

 if (width <= 0 || height <= 0)
 {
  return (NULL);
 }
 array = (int **)malloc(sizeof(int *) * height);
 if (array == NULL)
 {
  return (NULL);
 }
 while (i < p)
 {
  array[i] = malloc(sizeof(int) * width);
  if (array[i] == NULL)
  {
   for (i--; i >= 0; i--)
    free(array[i]);
   free(array);
   return (NULL);
  }
  while (j < k)
  {
   array[i][j] = 0;
   j++;
  }
  i++;
 }
 return (array);
}
