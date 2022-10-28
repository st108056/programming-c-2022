#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int x = 0;
	int mc = 0;
	int len = 10000;

	std::cin >> n;

	int* c = new int[n] { 0 };

	for (int i = 0; i < n; ++i)
	{
		std::cin >> c[i];
	}

	std::cin >> x;

	for (int i = 0; i < n; ++i)
	{
		if (x == c[i])
		{
			mc = x;
			break;
		}

		if (x > c[i])
		{
			if (len > x - c[i])
			{
				len = x - c[i];
				mc = c[i];
			}
			if (len == x - c[i] && mc > c[i])
			{
				mc = c[i];
			}
		}
		else if (x < c[i])
		{
			if (len > c[i] - x)
			{
				mc = c[i];
				len = c[i] - x;
			}

			if (len == c[i] - x && mc > c[i])
			{
				mc = c[i];
			}
		}
	}

	std::cout << mc;

	return EXIT_SUCCESS;
}
