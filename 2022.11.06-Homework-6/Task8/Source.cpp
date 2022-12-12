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
	}

	std::cin >> k;

	if (k < 0)
	{
		k = -1 * k % n;
	}
	else
	{
		k = n - k % n;
	}

	for (int i = 0; i < n; ++i)
	{
		std::cout << c[(i + k) % n] << " ";
	}


	delete[]c;

	return EXIT_SUCCESS;
}