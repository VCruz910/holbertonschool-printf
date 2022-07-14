#ifndef _MAIN_H_
#define _MAIN_H_

/*Libraries*/
#include <stdio.h>
#include <assert.h>
#include <ctype.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdarg.h>
#include <unistd.h>

/*Struct*/
/**
 * struct types - Choses type to print.
 * @data: Data type.
 * @f: Function type.
 **/
typedef struct types
{
char *data;
int (*function)(va_list ptr);
} escoge_t;

/*Prototypes (Mandatory Tasks)*/
/*Main Prototype*/
int _printf(const char *format, ...);

/*Made Prototypes (by Angeira and Victor)*/
int print_char(va_list c);
int print_string(va_list s);
int print_integer(int n);
int print_digits(va_list d);
int _putchar(char c);
int find_spec(char format, va_list ptr);
#endif
