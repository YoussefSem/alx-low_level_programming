#include <stdlib.h>

/**
 * print_name - What's my name
 * @name: a function that prints a name
 * @f:function to execute
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
