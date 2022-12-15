#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int m = 0;

	std::cin >> n >> m;

	int** c = new int* [n];
	for (int i = 0; i < n; ++i)
	{
		c[i] = new int[m] {0};
	}

	int** d = new int* [n];
	for (int i = 0; i < n; ++i)
	{
		d[i] = new int[m] {0};
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			std::cin >> c[i][j];
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			std::cin >> d[i][j];
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			std::cout << c[i][j] + d[i][j] << " ";
		}
		std::cout << std::endl;
	}

	for (int i = 0; i < n; ++i)
	{
		delete[] c[i];
	}
	delete[] c;

	for (int i = 0; i < n; ++i)
	{
		delete[] d[i];
	}
	delete[] d;

	return EXIT_SUCCESS;
}