#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @str: string pointer.
 * return: i
 */

int _strlen(char *str)

{
	int i;

	for (i = 0; str[i]; != 0; i++)
		;
	return (i);
}

/**
 * _strlen - strlen function but applied for constant char pointer str
 * @str: char pointer
 * return: i
 */

int _strlenc(const char *str)

{
	int i;

	for (i = 0; str[i]; != 0; i++)
		;
	return (i);
}
