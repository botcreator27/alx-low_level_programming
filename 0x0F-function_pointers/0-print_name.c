#include <stddef.h>
#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: name to be printed
 * @f: function of name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	f(name);
}

