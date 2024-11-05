#include "main.h"

/**
 * _memcpy - compies memory area
 * @dest: where to copy mem
 * @src: men the area copy from
 * @n: number of bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int u = 0;

	for (u = 0; u < n; u++)
	{
		dest[u] = src[u];
	}
	return (dest);
}
