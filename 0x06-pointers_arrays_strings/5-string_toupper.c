#include "main_h"

/**
 * string_toupper - changes all lower cases to upper 
 * @n: pointer
 * Return: n
 */
char *string_toupper(char *n)
{
	int i;

	for (i = 0; n[1] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
	}
	return (n);
}
