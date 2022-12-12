#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int x = 0;
	int a = 1;

	std::cin >> n;

	int* c = new int[n] { 0 };

	for (int i = 0; i < n; ++i)
	{
		std::cin >> c[i];
	}

	std::cin >> x;

	for (int i = 0; i < n; ++i)
	{
		if (x <= c[i])
		{
			a = i + 2;
		}
	}

	std::cout << a;

	delete[]c;

	return EXIT_SUCCESS;
}