#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	std::cin >> n;
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	std::cin >> d;

	int* m = new int[n] { 0 };
	int* t = new int[n] { 0 };

	for (int i = 0; i < n; ++i)
	{
		m[i] = i + 1;
		t[i] = i + 1;
	}

	for (int i = a - 1; i < b; ++i)
	{
		m[i] = t[b + a - i - 2];
	}

	for (int i = 0; i < n; ++i)
	{
		t[i] = m[i];
	}

	for (int i = c - 1; i < d; ++i)
	{
		m[i] = t[d + c - i - 2];
	} 
	
	for (int i = 0; i < n; ++i)
	{
		std::cout << m[i] << " ";
	}

	delete[] m;
	delete[] t;

	return EXIT_SUCCESS;
}