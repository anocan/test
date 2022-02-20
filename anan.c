#include <stdio.h>

// TEST

int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);

	if (n % 2 != 0)
	{
		for (int i = 0; i < n; i++)
		{
			if (i != (((n + 1) / 2) - 1))
			{
				for (int j = 0; j < ((n - 1) / 2); j++)
				{
					printf("0");
				}
				printf("1");
				for (int k = 0; k < ((n - 1) / 2); k++)
				{
					printf("0");
				}
				printf("\n");
			}
			else
			{
				for (int l = 0; l < n; l++)
				{
					printf("1");
				}
				printf("\n");
			}
		}
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			if (i != ((n / 2) - 1) && i != (n / 2))
			{
				for (int j = 0; j < (n / 2 - 1); j++)
				{
					printf("0");
				}
				for (int k = 0; k < 2; k++)
				{
					printf("1");
				}
				for (int m = 0; m < (n / 2 - 1); m++)
				{
					printf("0");
				}
				printf("\n");
			}
			else
			{
				for (int l = 0; l < n; l++)
				{
					printf("1");
				}
				printf("\n");
			}
		}
	}
}
