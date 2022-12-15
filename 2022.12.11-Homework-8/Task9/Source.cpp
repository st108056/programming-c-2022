#include<iostream>
#include<cstring>

void cutter(char* s, int n)
{
	if (n == strlen(s))
	{
		return;
	}
	else if (s[n] == s[strlen(s) - n - 1] && n != strlen(s) - n - 1)
	{
		return cutter(s, n + 1);
	}
	else
	{
		std::cout << s[n];
		return cutter(s, n + 1);
	}
}

int main(int argc, char* argv[])
{
	char* s = nullptr;
	s = new char[1000] {'0'};

	std::cin.getline(s, 1000);

	cutter(s, 0);

	delete[] s;

	return EXIT_SUCCESS;
}