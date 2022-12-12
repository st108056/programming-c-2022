#include<iostream>

int chk(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else if (n <= 0)
	{
		return 0;
	}
	else if (n > 32)
	{
		return chk(n - 15);
	}
	else
	{
		return chk(n - 5) + chk(n - 3);
	}
}

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;

	if (chk(n) > 0)
	{
		std::cout << "YES";
	}
	else
	{
		std::cout << "NO";
	}

	return EXIT_SUCCESS;
}