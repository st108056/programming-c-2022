#include<iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	unsigned int x = 0;
	int c = 1;
	int t = 1;

	std::cin >> a;

	for (int i = 9; i >= 0; --i)
	{
		c = 1;
		t = 1;
		for (int j = 1; j <= i; ++j)
		{
			c = c * 10;
			t = t * 2;
		}

		x = x + (a / c) * t;
		a = a - (a / c) * c;
	}

	std::cout << x;

	return EXIT_SUCCESS;
}