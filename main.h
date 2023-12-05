#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>


int printf_char(va_list val);
int _printf(const char *format, ...);
int printf_string(va_list val);
int _strlen(char *str);
int _strlen(const char *str);
void handle_char(int c, int *count);

int _putchar(char c);
#endif
