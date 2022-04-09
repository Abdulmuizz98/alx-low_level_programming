#include "main.h"

/**
 * _strlen - to return length of string
 * @s: char *s
 * Return: 0
 */

int _strlen(char *s)
{
int u;

u = 0;
while (s[u] != '\0')
{
u++;
}
return (u);
}
