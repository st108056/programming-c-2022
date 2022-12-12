#include<iostream>
#include <cstdlib>

/*
Я пытался это решить, но не получилось :(
Я не понимаю почему не работает -_-
Такое чувство, что у меня проблемы с массивом, но я не уверен ._.
*/

int strike(int x1, int y1, int x2, int y2)
{
	if (x1 == x2 || y1 == y2 || x1 + y1 == x2 + y2 || x1 - y1 == x2 - y2)
	{
		return 1;
	}
	else if (((abs(x1 - x2) == 2) && (abs(y1 - y2) == 1)) || ((abs(x1 - x2) == 1) && (abs(y1 - y2) == 2)))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int** freeplaces(int x, int y, int** c, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (strike(x, y, i, j) == 1)
			{
				c[i][j] = 0;
			}
		}
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			std::cout << c[i][j] << " ";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
	return c;
}

int counter(int** c, int n)
{
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (c[i][j] == 1)
			{
				cnt += 1;
			}
		}
	}

	return cnt;
}

int maga(int** c, int n, int k, int m)
{
	//int** a = new int* [n];
	//a = c;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			std::cout << c[i][j] << " ";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
	int cnt = 0;
	if (m == k)
	{
	//	std::cout << n << " " << k << " " << m << " " << cnt << std::endl;
		return counter(c, n);
	}
	else if (m < k)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (c[i][j] == 1)
				{
		
					cnt += maga(freeplaces(i, j, c, n), n, k, m + 1);
				}
			}
		}
	//	std::cout << n << " " << k << " " << m << " " << cnt << std::endl;
		return cnt;
	}
}

int main(int argc, char* argv[])
{
	int n = 0;
	int k = 0;
	std::cin >> n >> k;

	int** a = new int* [n];
	for (int i = 0; i < n; ++i)
	{
		a[i] = new int[n];
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			a[i][j] = 1;
		}
	}

	std::cout << maga(a, n, k, 1);

	delete[] a;
	return EXIT_SUCCESS;
}