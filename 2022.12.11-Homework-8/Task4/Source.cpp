#include<iostream>

void tower(int n, int from, int to)
{
	if (n <= 0) 
	{
		return;
	}
	int tmp = 6 - from - to;

	tower(n - 1, from, tmp);
	std::cout << "Disk " << n << " move from " << from << " to " << to << std::endl;
	tower(n - 1, tmp, to);
}

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	tower(n, 1, 2);

	return EXIT_SUCCESS;
}