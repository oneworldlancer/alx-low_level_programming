#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to duplicate
 *
 * Return: pointer to the duplicated string or
 * NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *dup_str;

	if (str == NULL)
	{
		return (NULL);
	}

	dup_str = malloc(strlen(str) + 1);

	if (dup_str == NULL)
	{
		return (NULL);
	}
	strcpy(dup_str, str);

	return (dup_str);
}
