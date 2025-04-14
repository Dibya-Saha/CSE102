#include<stdio.h>

int main()
{
	float x, s = 0, a;
	int i;
	scanf("%f", &x);

	x = (x * 3.14159265) / 180;

	for (i = 1; i < 30; i += 2)
	{
		if (i > 1)
		{
			a = (a * x * x) / (i * (i - 1));

			if (i % 2 > 0)
			{
				a = -a;
			}
		}

		else
		{
			a = x;
		}

		s += a;
	}

	printf("%0.6f\n", s);
}

/*#include<stdio.h>

int main()
{
	int n, i, j;

	scanf("%d", &n);

	for (i = 1; i < 2 * n; i++)
	{
		for (j = 1; j < 2 * n; j++)
		{
			if (i <= n)
			{
				if (j == n - i + 1 || j == n + i - 1)
				{
					printf("*");
				}
				else if (j > n - i + 1 && j < n + i - 1)
				{
					printf("_");
				}
				else
				{
					printf(" ");
				}
			}

			else
			{
				if (j == i - n + 1 || j == 3 * n - i - 1)
				{
					printf("*");
				}
				else if (j > i - n + 1 && j < 3 * n - i - 1)
				{
					printf("_");
				}
				else
				{
					printf(" ");
				}
			}

		}
		printf("\n");
	}
}*/
