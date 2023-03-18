#include <stdio.h>
/**
 * main - functin
 * Description:  program that prints the alphabet in lowercase,
 * followed by a new line.
 * Return: 0
 */

int main(void)
{
	int ch;

	for (ch = 0; ch >= 10; ch++)
	{
		putchar((ch % 10) + '0');

		for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);

		putchar(ch);
	}
	putchar('\n');
	return (0);
}
