#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>

int _putchar(char c);
int my_putchar(int a, int counter);
int _printf(const char *format, ...);
int (*selector(char c))(va_list);
int _char(va_list arg);
int _decimal(va_list arg);
int _string(va_list arg);

#endif
