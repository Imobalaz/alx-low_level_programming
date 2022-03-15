#include "main.h"
/**
 * jack_bauer - main function
 *
 * Return: 0
 *
 */

void jack_bauer(void)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 24)
	{
		while (j < 60)
		{
			int k;
			int l;
			int m;
			int n;

			k = i / 10;
			l = i % 10;
			m = j / 10;
			n = j % 10;

			_putchar('0' + k);
			_putchar('0' + l);
			_putchar(':');
			_putchar('0' + m);
			_putchar('0' + n);
			_putchar('\n');

			j++;
		}
		i++;
	}
}
