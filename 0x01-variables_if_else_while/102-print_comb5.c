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
	int q;

	for (m = 48; m < 58; m++)
	{

		for (n = 48; n < 58; n++)
		{
			for (p = 48; p < 58; p++)
			{
				for (q = 48; q < 58; q++)
				{
					if (m != 48 || n != 48 || p != 48 || q != 48)
					{
						if (m != 48 || n != 48 || p != 48 || q != 49)
						{
							putchar(44);
							putchar(32);
						}
						putchar(m);
						putchar(n);
						putchar(32);
						putchar(p);
						putchar(q);
					}
				}

			}
		}
	}
	putchar('\n');
	return (0);
}
