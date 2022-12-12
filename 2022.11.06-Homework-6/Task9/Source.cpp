#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int sum = 0;

	std::cin >> n;

	int* c = new int[n] { 0 };

	for (int i = 0; i < n; ++i)
	{
		std::cin >> c[i];
	}

	int lastcost = c[n - 1];
	int lasti = n - 1;

	for (int i = n - 1; i >= 0; --i)
	{
		if (lastcost < c[i])
		{
			sum += (lasti - i) * c[lasti];
			lasti = i;
			lastcost = c[i];
		}
	}

	sum += lastcost * (1 + lasti);

	std::cout << sum;

	return EXIT_SUCCESS;
}