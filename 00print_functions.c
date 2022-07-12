#include "main.h"
#include <>

/*
 *
 *
 *
 */

int print_string(va_list s)//list of arguments 
{
	char *storage = va_arg(s, char *);//a string is an array of characters
	int idx;

	if (storage == NULL)
	{
		storage = "(null)";
	}

	for (idx = 0; storage[idx] != ‘\0’; idx++)
	{
		_putchar(storage[idx]);
	}
	return (idx);

	
}


/*
 *
 *
 *
 *
 */
int print_char(va_list c)
{	
	char storage = va_arg(c, int);

	_putchar(storage);
	return (1);
}

/*
 *
 *
 *
 */
int print_integer(va_list in)
{
	int idx;
	int storage = va_arg(in, int);
		

	if (storage != NULL)
	{
		_putchar(storage);
	}
	return (1);
}
\\considerar: numeros negativo- imprimir simbolo negativo y num negativo ; si el numero es = 0 ; limite de cuantos numeros hay ; 
