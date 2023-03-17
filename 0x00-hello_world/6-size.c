#include<stdio.h>
/**
* main - a program that the size of various types on the computer
* Return: 0 (This program will be successful)
*/
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;
printf("Size of a char: %lu byte(s)\n", sizeof(a));
printf("Size of an int: %lu byte(s)\n", sizeof(b));
printf("Size of a long int: %lu byte(s)\n", sizeof(c));
printf("Size of a long long int: %lu byte(s)\n", sizeof(d));
printf("Size of a float: %lu byte(s)\n", sizeof(f));
return (0);
}
