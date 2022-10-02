#include<iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;

	std::cin >> a >> b >> c;

	if ((a >= b + c) || (b >= a + c) || (c >= a + b))
	{
		std::cout << "impossible";
	}
	else if ((a * a == b * b + c * c) || (b * b == c * c + a * a) || (c * c == a * a + b * b))
	{
		std::cout << "right";
	}
	else if ((a * a > b * b + c * c) || (b * b > c * c + a * a) || (c * c > a * a + b * b))
	{
		std::cout << "obtuse";
	}
	else if ((a * a < b * b + c * c) && (b * b < c * c + a * a) && (c * c < a * a + b * b))
	{
		std::cout << "acute";
	}

	return EXIT_SUCCESS;
}