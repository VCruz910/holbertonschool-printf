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
#include <stdout.h>

/*Struct*/

/**
* struct op - Struct op
*
* @types
* @f: The function associated
*/
typedef struct types
{
	char *data;
	int (*f)(va_list ptr);
} escoge_t;


/*Prototypes (Mandatory Tasks)*/
int _printf(const char *format, ...);
int _putchar(char c);


/*Prototypes (Vic / Ang Created)*/

int print_char(va_list ptr);
int print_string(va_list ptr);
int print_integer(va_list ptr);

#endif
