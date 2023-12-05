#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>


int _strlen(const char *str);
int _printf(const char *format, ...);
void handle_char(int c, int *count);
int _putchar(char c);


#endif
