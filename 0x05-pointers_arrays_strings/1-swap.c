/* here, we swap the values a and b */

/**
 *swap_int - swaps the values a and b
 *@a: first value
 *@b: second value for swap
 *
 *Return: void always
 */

#include "main.h"

void swap_int(int *a, int *b)
{
	int z;

	z = *a;
	*a = *b;
	*b = z;
}
