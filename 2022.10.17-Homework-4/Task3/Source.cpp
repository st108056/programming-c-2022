#include<iostream>

int main(int argc, char* argv[])
{
	int x = 0;
	int a = 1;
	int n = 1;

	std::cin >> x;

	for (int i = 0; i < x; i++)
	{
		std::cout << n << " ";
		if (a == n)
		{
			++n;
			a = 0;
		}
		++a;

	}

	return EXIT_SUCCESS;
}