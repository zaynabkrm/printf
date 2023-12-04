#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 *
 * return: if succeful 1
 * if it failed -1 is returned
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
