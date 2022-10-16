#include<iostream>
#include<cmath>

int main(int argc, char* argv[])
{
	int a = 0;
	unsigned int x = 0;
	int c = 0;

	std::cin >> a;

	for (int i = 9; i >= 0; --i)
	{
		c = pow(10, i);
		x = x + (a / c) * pow(2, i);
		a = a - (a / c) * c;
	}

	std::cout << x;

	return EXIT_SUCCESS;
}