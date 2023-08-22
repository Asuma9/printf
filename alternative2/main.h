#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int my_putchar(int a, int count);
int (*selector(char c))(va_list);
int _char(va_list args);
int _string(va_list args);
int _decimal(va_list args);
int _percentage(va_list args);

#endif /* MAIN_H */
