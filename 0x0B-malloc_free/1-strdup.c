#include "main.h"
#include <stdlib.h>

/**
 *_strdup - duplicates a string
 *@str: string to be copied
 *
 *Return: pointer to the duplicate
 */

char *_strdup(char *str)
{
	int a = 0, i = 1;
	char *s;

	if (str == NULL)
	return (NULL);

	while (str[i])
	{
		i++;
	}
	s = malloc(i + 1);

	if (s == NULL)
	return (NULL);

	while (a < i)
	{
	s[a] = str[a];
	a++;
	}

	s[a] = '\0';
	return (s);
}
