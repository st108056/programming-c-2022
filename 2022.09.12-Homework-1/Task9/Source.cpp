#include<iostream>

int main(int argc, char* argv[])
{
	int x = 0;
	int a = 0;

	std::cin >> x;

	a = x * x;

	std::cout << (a + 1) * (a + x) + 1 << std::endl;

	return EXIT_SUCCESS;
}