#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int sum = -1001;

	std::cin >> n;

	int* c = new int[n] { 0 };

	for (int i = 0; i < n; ++i)
	{
		std::cin >> c[i];
	}

	if (sum < c[n - 1] + c[0] + c[1])
	{
		sum = c[n - 1] + c[0] + c[1];
	}
	if (sum < c[n - 2] + c[n - 1] + c[0])
	{
		sum = c[n - 2] + c[n - 1] + c[0];
	}

	for (int i = 0; i < n - 2; ++i)
	{
		if (sum < c[i] + c[i + 1] + c[i + 2])
		{
			sum = c[i] + c[i + 1] + c[i + 2];
		}
	}

	std::cout << sum;

	return EXIT_SUCCESS;
}