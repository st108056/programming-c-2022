#include<iostream>

int min(int a, int b, int c, int d)
{
	if (a < 1)
	{
		return 0;
	}
	else if (b < 1)
	{
		return 0;
	}
	else if (c < 1)
	{
		return 0;
	}
	else if (d < 1)
	{
		return 0;
	}
	else
	{
		return 1 + min(a - 1, b - 1, c - 1, d - 1);
	}
}

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	std::cin >> a >> b >> c >> d;

	std::cout << min(a, b, c, d);

	return EXIT_SUCCESS;
}