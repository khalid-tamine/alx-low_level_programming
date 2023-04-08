#include "main.h"
/**
 * _strcat - copies memory area,
 * @dest: destination memory area.
 * @src: source memory area.
 * Return: the pointer to dest.
 */

char *_strcat(char *dest, char *src)
{
	unsigned int i;

	for (i = 0; i < 2; i++)
		*(dest + i) =  *(src + i);

	return (dest);
}
