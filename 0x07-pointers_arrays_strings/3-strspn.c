#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 *
 * @s : the string
 *
 * @accept : the substring
 *
 * Return: lenght of prefix substring
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int position;
	unsigned int longest;
	unsigned int i;
	unsigned int j;
	unsigned int len_acc;

	len_acc = 0;
	longest = 0;
	while (accept[len_acc])
		len_acc++;

	for (i = 0; i < len_acc; i++)
	{
		j = 0;
		position = 0;
		while (s[j])
		{
			if (s[j] == accept[i])
			{
				position = j + 1;
				break;
			}
			j++;
		}
		if (position > longest)
			longest = position;

	}
	return (longest);

}
