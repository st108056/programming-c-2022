#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;

	std::cin >> n;

	int** c = new int* [n];
	for (int i = 0; i < n; ++i)
	{
		c[i] = new int[n] {0};
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			std::cin >> c[i][j];
		}
	}

	for (int i = n - 1; i >= 0; --i)
	{
		for (int j = n - 1; j >= 0; --j)
		{
			std::cout << c[j][i] << " ";
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