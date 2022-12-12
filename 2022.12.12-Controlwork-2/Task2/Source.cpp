#include<iostream>

void reverse(int n, int* c)
{
	n = n - 1;
	if (n < 0)
	{
		return;
	}
	std::cout << c[n] << " ";
	reverse(n, c);
}

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	int* c = new int[n] { 0 };
	for (int i = 0; i < n; ++i)
	{
		std::cin >> c[i];
	}

	reverse(n, c);

	delete[] c;
	return EXIT_SUCCESS;
}