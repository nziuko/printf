#ifndef _FILE_NAME_H_
#define _FILE_NAME_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

int _printf(const char *format, ...);
int printthis(const char *format, va_list args);
int _putchar(char c);
int stringhandler(va_list args);
int charhandler(va_list args);
int defaulthandler(const char *format);
int inthandler(va_list args);

#endif
