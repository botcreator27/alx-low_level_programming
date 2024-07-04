#include "main.h"

/**
 *_strcmp - compares pointers to 2 strings
 *@s1: a pointer to the first string
 *@s2: a pointer to the second string
 *Return: str1<str2, the negative difference of the first unmatched characters
 *if str1 == str2, 0
 *if str1 > str2, the positive difference
 *
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);

}
