#include<iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	std::cin >> a >> b >> c >> d;
	
	if (a == 0)
	{
		if (b == 0) 
		{
			if (c == 0)
			{
				std::cout << "INF";
			}
			else
			{
				std::cout << "INF";
			}
		}
		else
		{
			std::cout << "NO";
		}
	}
	else 
	{
		if (b == 0)
		{	
			if (d == 0)
			{
				std::cout << "NO";
			}
			else if (d != 0)
			{
				std::cout << 0;
			}
		}
		else if (b * c != d * a)
		{	
			if (b % a == 0)
			{
				std::cout << - b / a;
			}
			else
			{
				std::cout << "NO";
			}
		}
		else if (b * c == d * a)
		{
			std::cout << "NO";
		}
	}

	return EXIT_SUCCESS;
}