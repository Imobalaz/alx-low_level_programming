#include <stdio.h>
#include <string.h>
char *_strcat(char *dest, char *src);

int main(void)
{
	_strcat("Hello", "Welcome");
	return(0);
}

char *_strcat(char *dest, char *src)
{
	int len_dest;
	int len_src;
	int i;

	len_dest = strlen(dest);
	len_src = strlen(src);

	for (i = 0; i < len_src + 1; i++)
	{
		dest[len_dest] = src[i];
	}

	for (i = 0; i < len_dest + len_src; i++)
	{
		putchar(dest[i]);
	}

	return (dest);
}
