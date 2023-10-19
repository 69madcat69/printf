#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

int _putchar(char c);
int printf_binary(unsigned int num, int printed);
int printf_int(va_list args, int printed);
int printf_string(va_list args, int printed);
int printf_char(va_list args, int printed);
int _printf(const char *format, ...);
int _x(unsigned int num, int printed, int uppercase);
int printf_octal(unsigned int num, int printed);
int printf_unsigned(unsigned int num, int printed);
int printf_reverse(va_list args, int printed);
int printf_pointer(va_list args, int printed);
int Main(const char *format, va_list args, int printed);


#endif
