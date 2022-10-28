#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int x = 0;
	int max = 0;
	int maxc = 0;

	std::cin >> n;

	int* c = new int[n] { 0 };

	for (int i = 0; i < n; ++i)
	{
		std::cin >> c[i];
	}

	for (int i = 0; i < n; ++i)
	{
		std::cin >> x;
		if (max < c[i] * x)
		{
			max = c[i] * x;
			maxc = i;
		}
	}

	std::cout << maxc + 1;

	return EXIT_SUCCESS;
}
