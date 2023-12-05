#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>

#define BUFF_SIZE 1024

int _printf(const char *format, ...);
bool invalid_format(const char *format);
void handle_char(int c, int *count);
void handle_string(char *str, int *count);
void print_integer(int num, int *count);
int _strlen(char *str);

int _putchar(char c);

#endif
