#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int x = 0;
	int cnt = 0;
	
	std::cin >> n;

	int* c = new int[n] { 0 };

	for (int i = 0; i < n; ++i)
	{
		std::cin >> c[i];
	}

	std::cin >> x;

	for (int i = 0; i < n; ++i)
	{
		if (c[i] == x)
		{
			++cnt;
		}
	}

	std::cout << cnt;

	return EXIT_SUCCESS;
}
