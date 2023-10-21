/* array elements */
/**
 *print_array - prints elements of an array
 *@a: the array
 *@n: number of elements in array
 *
 *Return: void
 */

#include "main.h"
#include <stdio.h>

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
	printf("%d", a[j]);
	if (j != (n - 1))
	{
		printf(", ");
	}
	}
	printf("\n");
}
