/**
 *print_rev - prints string in reverse
 *@s: string for printing
 *
 *Return: void always
 */

#include "main.h"

void print_rev(char *s)
{
	int count = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	for (i = count - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
