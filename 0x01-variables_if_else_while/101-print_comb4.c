#include <stdio.h>

/**
 * main - main header
 *
 * Return: 0
 */
int main(void)
{
	int m;
	int n;
	int p;

	for (m = 48; m < 58; m++)
	{

		for (n = m + 1; n < 58; n++)
		{
			for (p = n + 1; p < 58; p++)
			{
				if (m != 48 || n != 49 || p != 50)
				{
					putchar(44);
					putchar(32);
				}
				putchar(m);
				putchar(n);
				putchar(p);
			}
		}
	}
	putchar('\n');
	return (0);
}
