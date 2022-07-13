#include "main.h"

/*
 * print_string - prints a string
 * 
 * @s: argument pointer
 * 
 * Return: count of numbers printed
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
 * print_char - prints a character
 *
 * @c: argument pointer 
 *
 * Return: count of numbers printed
 */
int print_char(va_list c)
{	
	char storage = va_arg(c, int);

	_putchar(storage);
	return (1);
}

\\considerar: numeros negativo- imprimir simbolo negativo y num negativo ; si el numero es = 0 ; limite de cuantos numeros hay ; 

/**
  * print_digits - prints integer
  *
  * @d: argument pointer
  *
  * Return: count of numbers printed
  */
int print_digits(va_list d)
{
	int num = va_arg(d, int); 
	int idx = 0;

	idx += print_int(num);
	return (idx);
}

/**
 * print_in - prints  integer
 *
 * @n: number to be printed
 *
 * Return: count of numbers printed
 */
int print_in(int n)
{
	int idx = 1;
	unsigned int num = 0;
	
	if (n < 0)
	{
		_putchar('-');
		idx++;
	num = n * -1;
	}
	else
	{
		num = n;
	}
	if (num / 10)
	{
		idx += print_in(num / 10);
	}
	_putchar((num % 10) + 48);
	return (idx);
}
