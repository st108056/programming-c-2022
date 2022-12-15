#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;

	std::cin >> n;

	int* c = new int[n] { 0 };
	int* d = new int[n] { 0 };

	for (int i = 0; i < n; ++i)
	{
		std::cin >> c[i];
	}

	for (int i = 0; i < n; ++i)
	{
		d[i] = c[n - i - 1];
	}

	for (int i = 0; i < n; ++i)
	{
		std::cout << d[i] << " ";
	}

	delete[] c;
	delete[] d;

	return EXIT_SUCCESS;
}