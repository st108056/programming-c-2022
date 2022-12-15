#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int m = 0;

	std::cin >> n;

	int* c = new int[n] { 0 };

	for (int k = 0; k < n; ++k)
	{
		std::cin >> c[k];
	}

	std::cin >> m;

	int* i = new int[n] { 0 };
	int* j = new int[n] { 0 };

	for (int k = 0; k < m; ++k)
	{
		std::cin >> i[k] >> j[k];
	}


	for (int k = 0; k < m; ++k)
	{
		for (int t = i[k]; t <= j[k]; ++t)
		{
			std::cout << c[t - 1] << " ";
		}
		std::cout << std::endl;
	}

	delete[] c;
	delete[] i;
	delete[] j;

	return EXIT_SUCCESS;
}