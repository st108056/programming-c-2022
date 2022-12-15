#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int c3 = 0;
	int c4 = 0;

	std::cin >> n;

	int* c = new int[n] { 0 };
	int* m3 = new int[n] { 0 };
	int* m4 = new int[n] { 0 };

	for (int i = 0; i < n; ++i)
	{
		std::cin >> c[i];
		if (c[i] % 2 == 0) 
		{
			m4[c4] = c[i];
			c4 += 1;
		}
		else
		{
			m3[c3] = c[i];
			c3 += 1;
		}
	}

	for (int i = 0; i < c3; ++i) 
	{
		std::cout << m3[i] << " ";
	}
	std::cout << std::endl;

	for (int i = 0; i < c4; ++i) 
	{
		std::cout << m4[i] << " ";
	}
	std::cout << std::endl;

	if (c4 >= c3) 
	{
		std::cout << "YES";
	}
	else
	{
		std::cout << "NO";
	}

	delete[] c;

	return EXIT_SUCCESS;
}