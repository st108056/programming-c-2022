#include<iostream>

int check(int n, int k)
{
	if (n < k*k)
	{
		return 0;
	}
	else if (k < 1)
	{
		return 0;
	}
	else if (n % k == 0)
	{
		return 1;
	}
	else
	{
		return check(n, k + 1);
	}
}

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;

	if (check(n, 2) == 0)
	{
		std::cout << "prime";
	}
	else
	{
		std::cout << "composite";
	}

	return EXIT_SUCCESS;
}