#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

#define BUFF_SIZE 1024

int _strlen(const char *str);
int _printf(const char *format, ...);
void print_integer(int num, int *count);
void handle_char(int c, int *count);
int _putchar(char c);


#endif
