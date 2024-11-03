#include "main.h"

/**
 * _strlen - retutrns the length of a string
 * @s: string
 * Return: returns Lenght;
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s)
	{
		l++;
		s++;
	}
	return (l);
}
