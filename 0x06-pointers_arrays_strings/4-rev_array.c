#include "main.h"
/**
 * _reverse_array - reverse arrays of intergers
 * @a: array
 * @n: number of elements of array
 *
 * Return: rev
 */
void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n; i++)
	{
		n--;
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
