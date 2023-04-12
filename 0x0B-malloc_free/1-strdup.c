#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 *Prototype: char *_strdup(char *str);
The _strdup() function returns a pointer to a new string which is a duplicate of the string str. Memory for the new string is obtained with malloc, and can be freed with free.
Returns NULL if str = NULL
On success, the _strdup function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *duplicate_str;
	int i = 0, len = 0;

	if (str == NULL) /* validate str input */
		return (NULL);

	while (*(str + i))
		len++, i++;
	len++; /* add null terminator to length */

	duplicate_str = malloc(sizeof(char) * len); /* allocate memory */

	if (duplicate_str == NULL) /* validate memory */
		return (NULL);

	i = 0;
	while (i < len)
	{
		*(duplicate_str + i) = *(str + i);
		i++;
	}

	return (duplicate_str);
}
