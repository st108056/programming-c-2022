#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int k = 0;

	std::cin >> n;

	int* c = new int[n] { 0 };

	for (int i = 0; i < n; ++i)
	{
		std::cin >> c[i];
		if (c[i] < c[k]) {
			k = i;
		}
	}

	for (int i = k; i < n; i++)
	{
		std::cout << c[i] << " ";
	}

	for (int i = 0; i < k; i++)
	{
		std::cout << c[i] << " ";
	}

	delete[] c;

	return EXIT_SUCCESS;
}