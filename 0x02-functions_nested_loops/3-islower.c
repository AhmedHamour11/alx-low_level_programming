#include "main.h"
/**
* _islower - function that checks for lowercase character.
* @c: The character to be checked
* Return: 1 if c is lowercase 0 otherwise
* Description: 'the program's description'
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
