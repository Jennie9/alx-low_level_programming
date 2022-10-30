#include "main.h"

/**
 * rot13 - encodes a string using r0t13
 *
 * Return: a pointer to the encoded string
 */
char *rot13(char *str)
{
	int indx1 = 0, indx2;
	char alphabet[52] = {
