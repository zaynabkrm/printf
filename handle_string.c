#include "main.h"
#include <stdarg.h>
#include <string.h>

/**
 * handle_string - handle the string
 * @str: the string
 * @count: the pointer
 */
void handle_string(char *str, int *count)
{
	int x;

	if (str == NULL)
	{
		write(1, "(null)", 6);
		*count += 6;
	}
	else
	{
		x = strlen(str);
		write(1, str, x);
		*count += x;
	}
}
