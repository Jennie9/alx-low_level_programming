#include "main.h"

/**
 * char *_strcpy - function that copies the string pointed to by src
 * @dest: copy to destination
 * @src: copy source
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int len = o;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src + len);
		len++;
	}

	*(dest + len) = '\0';
	return (dest);
}
