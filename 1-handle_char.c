#include "main.h"

/**
 * handle_char - Handle character
 * @c: character
 * @count: pointer
 * by Zaynab&Reham
 *
 */
void handle_char(int c, int *count)
{
	write(1, &c, 1);
	(*count)++;
}
