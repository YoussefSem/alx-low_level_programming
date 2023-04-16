#include <stdio.h>
#include "main.h"

/**
 * main - The best argument against democracy is a five-minute conversation.
 * @argc: argument counter
 * @argv: pointer to array of arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
		printf("%s\n", argv[i++]);

	return (0);
}
