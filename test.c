#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: argument
 * by Zaynab&Reham
 * Return: the number of charcters
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	va_start(args, format);
	if (invalid_format(format))
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					handle_char(va_arg(args, int), &count);
					break;
				case 's':
					handle_string(va_arg(args, char *), &count);
					break;
				case 'd':
				case 'i':
					print_integer(va_arg(args, int), &count);
					break;
				case '%':
					write(1, "%", 1);
					count++;
					break;
				default:
					write(1, format - 1, 2);
					count += 2;
					break;
			}
		}
		else
		{
			write(1, format, 1);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
/**
 *  print_integer - print numbers that produces output according to a format.
 * @num: parameter number.
 * @count: parameter number.
 * by Zaynab&Reham
 * Return: 1 if succes.
 */
void print_integer(int num, int *count)
{
	char buffer[BUFF_SIZE];
	int len;
	int is_negative;

	len = 0;
	is_negative = 0;
	if (num == 0)
	{
		buffer[len++] = '0';
	}
	else
	{
		if (num < 0)
		{
			is_negative = 1;
			num = -num;
		}
		do {
			buffer[len++] = '0' + (num % 10);
			num /= 10;
		} while (num > 0);
	}
	if (is_negative)
		buffer[len++] = '-';

	while (len > 0)
	{
		write(1, &buffer[--len], 1);
		(*count)++;
	}
}

/**
 * invalid_format - Check if the format string is invalid
 * @format: the format string
 *
 * Return: true if the format string is invalid, false otherwise.
*/

bool invalid_format(const char *format)
{
	if (!format || (format[0] == '%' && !format[1]))
		return (true);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (true);
	return (false);
}

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

/**
 * stlen - the length of string
 * @str: string
 * Return: length
 */
int stlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
