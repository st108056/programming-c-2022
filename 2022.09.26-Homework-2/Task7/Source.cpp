#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int m = 0;
	int k = 0;

	std::cin >> n >> m >> k;

	
	if ((k % n == 0 && k / n < m) || (k % m == 0 && k / m < n)) 
	{
		std::cout << "YES";
	}
	else
	{
		std::cout << "NO";
	}

	return EXIT_SUCCESS;
}