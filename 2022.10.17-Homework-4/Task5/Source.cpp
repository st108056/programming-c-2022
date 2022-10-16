#include<iostream>

int main(int argc, char* argv[])
{
	float x = 1;
	float n = 1;
	int c = 0;

	std::cin >> c;

	for (int i = 1; i <= c; i++)
	{
		n = n * i;
		x = x + (1 / n);
	}

	printf("%.5f", x);

	return EXIT_SUCCESS;
}