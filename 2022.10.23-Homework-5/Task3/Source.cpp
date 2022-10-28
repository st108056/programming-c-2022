#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int minc = 1001;
	int maxc = -1001;

	std::cin >> n;

	int* c = new int[n] { 0 };

	for (int i = 0; i < n; ++i)
	{
		std::cin >> c[i];
		if (c[i] > maxc)
		{
			maxc = c[i];
		}
		if (c[i] < minc)
		{
			minc = c[i];
		}
	}

	for (int i = 0; i < n; ++i)
	{
		if (c[i] == maxc)
		{
			c[i] = minc;
		}
		std::cout << c[i] << " ";
	}

	return EXIT_SUCCESS;
}

