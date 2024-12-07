#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function prints a name
 * @name: name to be printed
 * @f: pointer to function
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
