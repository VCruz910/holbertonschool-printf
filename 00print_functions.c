#include "main.h"
#include <>

/*
 *
 *
 *
 */

int print_string(va_list ptr)
{	
	char storage;
	int idx;
	storage = var_arg(ptr, int)

	if (storage != NULL)
	{
		for (idx =0, storage[idx] != ‘\0’ idx++)
		{
			_putchar(storage[idx]);
		}
		return (idx);
	{
}


/*
 *
 *
 *
 *
 */
int print_char(va_list ptr)
{	
	char storage;
	storage = var_arg(ptr,int);

	if (storage != NULL)
	{
		_putchar(storage);
	{
	return (1);
}

/*
 *
 *
 *
 */
int print_integer(va_list ptr)
{
	int storage;
	int idx;
	storage = var_arg(ptr, int);

	if (storage != NULL)
	{
		putchar (storage);
	}
	return (1);
}
