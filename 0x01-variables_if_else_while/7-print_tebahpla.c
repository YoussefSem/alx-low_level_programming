#include <stdio.h>
/**
 * main - Entry point Prints the alphabet lowercase using ascii backwards
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch;
for (ch = 'z'; ch >= 'a'; ch--)
{
putchar(ch);
}
putchar('\n');
return (0);
}


