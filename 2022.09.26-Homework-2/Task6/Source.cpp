#include<iostream>

int main(int argc, char* argv[])
{
	int ax = 0;
	int ay = 0;
	int bx = 0;
	int by = 0;

	std::cin >> ax >> ay >> bx >> by;

	if ((ax == bx) || (ay == by) || (ax + ay == bx + by) || (ax - bx == ay - by))
	{
		std::cout << "YES";
	}
	else
	{
		std::cout << "NO";
	}

	return EXIT_SUCCESS;
}