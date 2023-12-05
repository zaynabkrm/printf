#include "main.h"

/**
 * _printf -Handle the following conversion specifiers: d, i
 * @format: argument
 *
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	
	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%' && (*(format + 1) == 'd' || *(format + 1) == 'i'))
				{
				int num = va_arg(args, int);
				
				printf("%d", num);
				count++;
				format += 2;
				continue;
				}
				putchar(*format);
				count++;
				format++;
	}
	va_end(args);
	return (count);
}
