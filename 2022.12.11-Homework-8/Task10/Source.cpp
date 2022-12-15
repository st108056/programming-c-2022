#include<iostream>

int deletter(int** a, int n, int k)
{
	int cnt = 1;
	for (int i = 0; i < n; i++)
	{
		if (a[i][1] == k)
		{
			cnt += deletter(a, n, a[i][0]);
		}
	}
	return cnt;
}

int main(int argc, char* argv[])
{
	int n = 0;
	int k = 0;

	std::cin >> n;

	int** c = new int* [n];
	for (int i = 0; i < n; ++i)
	{
		c[i] = new int[2] {0};
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			std::cin >> c[i][j];
		}
	}

	std::cin >> k;

	std::cout << deletter(c, n, k);

	for (int i = 0; i < n; ++i)
	{
		delete[] c[i];
	}
	delete[] c;

	return EXIT_SUCCESS;
}