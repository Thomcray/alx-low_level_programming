#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: param holding the name
 * @f: function pointer as argument
 *
 * Return: void
 */

void print_name(char *name, void(*f)(char *))
{
	f(name);
}
