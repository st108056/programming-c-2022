#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int min = 10000000;
	int max = -10000000;
	int imin = 0;
	int imax = 0;
	int sum = 0;
	int pro = 1;
	int a = 0;

	std::cin >> n;

	int* c = new int[n] { 0 };

	for (int i = 0; i < n; ++i)
	{
		std::cin >> c[i];

		if (c[i] > 0)
		{
			sum += c[i];
		}

		if (c[i] > max)
		{
			max = c[i];
			imax = i;
		}
		if (c[i] < min)
		{
			min = c[i];
			imin = i;
		}
	}

	if (imin > imax)
	{
		a = imin;
		imin = imax;
		imax = a;
	}

	for (int i = imin + 1; i < imax; ++i)
	{
		pro = pro * c[i];
	}

	std::cout << sum << " " << pro;

	delete[] c;

	return EXIT_SUCCESS;
}