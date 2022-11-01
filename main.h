#ifndef h
#define h
#undef h

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <stddef.h>


int _printf(const char *format, ...);
int _putchar(char c);
int print_c(va_list c);
int print_s(va_list s);
int print_di(va_list di);

typedef struct printformat
{
char *theC;
int (*z)(va_list);
} form;

#endif
