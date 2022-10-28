#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int l = 0;
	int r = 0;
	int mi = 0;
	int mc = -1001;

	std::cin >> n;

	int* c = new int[n] { 0 };

	for (int i = 0; i < n; ++i)
	{
		std::cin >> c[i];
	}

	std::cin >> l >> r;

	for (int i = l - 1; i < r; ++i)
	{
		if (c[i] > mc)
		{
			mc = c[i];
			mi = i;
		}
	}

	std::cout << mc << " " << mi + 1;

	return EXIT_SUCCESS;
}
