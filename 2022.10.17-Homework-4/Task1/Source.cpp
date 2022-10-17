#include<iostream>

int main(int argc, char* argv[])
{
	unsigned int x = 0;
	int cnt = 0;
	int t = 0;

	std::cin >> x;

	for (int i = 1; i * i <= x; ++i)
	{
		if (x % i == 0)
		{
			++cnt;
		}
		t = i;
	}

	if (x % t == 0)
	{
		cnt = cnt * 2 - 1;
	}
	else
	{
		cnt = 2 * cnt;
	}

	std::cout << cnt;

	return EXIT_SUCCESS;
}