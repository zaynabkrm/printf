#include <stdarg.h>
#include <unistd.h>
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
	if (Invalid_format(format))
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
					handle_str(va_arg(args, char *), &count);
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
