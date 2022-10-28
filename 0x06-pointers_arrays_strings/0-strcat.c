#include "main.h"

/**
 * _strcat - concatennating two strings
 * @dest: copy to
 * @src: copy from
 * Return: pointers to dest
 */
char *_strcat(char *dest, char *src)
{
	int j;
	int e;

	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	e = o;
	while (src[e] != '\0')
	{
		dest[j] = src[e];
		j++;
		e++;
	}

	dest[j] = '\0';
	return (dest);
}
