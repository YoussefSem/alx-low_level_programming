#include <stdio.h>
#include "main.h"

/**
 * main - It ain't what they call you, it's what you answer to.
 * @argc: argument counter
 * @argv: pointer to array of arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
