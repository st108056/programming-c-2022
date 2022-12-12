#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;

	std::cin >> n;

	int* c = new int[n] { 0 };

	for (int i = 0; i < n; ++i)
	{
		std::cin >> c[i];
	}

	for (int i = n - 1; i >= 0; --i)
	{
		std::cout << c[i] << " ";
	}

	delete[]c;

	return EXIT_SUCCESS;
}