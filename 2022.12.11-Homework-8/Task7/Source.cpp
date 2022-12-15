#include<iostream>
#include<cstring>

void stars(char* s, int n)
{
	if (n == strlen(s) - 1)
	{
		std::cout << s[n];
		return;
	}
	else
	{
		std::cout << s[n] << '*';
		return stars(s, n + 1);
	}
}

int main(int argc, char* argv[])
{
	char* s = nullptr;
	s = new char[1000] {'0'};

	std::cin.getline(s, 1000);

	stars(s, 0);

	delete[] s;

	return EXIT_SUCCESS;
}