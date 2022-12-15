#include<iostream>

int** spiralka(int** a, int n, int k, int m, int r)
{
	if (k == n * n)
	{
		return a;
	}
	else if (m == 0)
	{
		for (int i = 0; i < n; i++)
		{
			if (a[r][i] == 0)
			{
				k += 1;
				a[r][i] = k;
			}
		}
		return spiralka(a, n, k, m + 1, r);
	}
	else if (m == 1)
	{
		for (int i = 0; i < n; i++)
		{
			if (a[i][n - r - 1] == 0)
			{
				k += 1;
				a[i][n - r - 1] = k;
			}
		}
		return spiralka(a, n, k, m + 1, r);
	}
	else if (m == 2)
	{
		for (int i = 0; i < n; i++)
		{
			if (a[n - r - 1][n - i - 1] == 0)
			{
				k += 1;
				a[n - r - 1][n - i - 1] = k;
			}
		}
		return spiralka(a, n, k, m + 1, r);
	}
	else if (m == 3)
	{
		for (int i = 0; i < n; i++)
		{
			if (a[n - i - 1][r] == 0)
			{
				k += 1;
				a[n - i - 1][r] = k;
			}
		}
		return spiralka(a, n, k, 0, r + 1);
	}
}

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;

	int** c = new int* [n];
	for (int i = 0; i < n; ++i)
	{
		c[i] = new int[n] {0};
	}

	c = spiralka(c, n, 0, 0, 0);

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			std::cout << c[i][j] << " ";
		}
		std::cout << std::endl;
	}

	for (int i = 0; i < n; ++i)
	{
		delete[] c[i];
	}
	delete[] c;

	return EXIT_SUCCESS;
}