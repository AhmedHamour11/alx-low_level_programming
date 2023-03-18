#include <stdio.h>
/**
 * main - functin
 * Description:  program that prints the alphabet in lowercase,
 * followed by a new line.
 * Return: 0
 */

int main(void)
{
	int x;
	char let;

	for (x = 0; x < 10; x++)
		putchar((x % 10) + '0');

	for (let = 'a'; let <= 'f'; let++)
		putchar(let);

	putchar('\n');

	return (0);
}
