#include<iostream>
#include<cstring>

void skobki(char* s, int n)
{
	if (n == strlen(s))
	{
		return;
	}
	else if (n < strlen(s) / 2 - 1 || (n < strlen(s) / 2 && strlen(s) % 2 == 1))
	{
		std::cout << s[n] << '(';
		return skobki(s, n + 1);
	}
	else if (n > strlen(s) / 2)
	{
		std::cout << ')' << s[n];
		return skobki(s, n + 1);
	}
	else
	{
		std::cout << s[n];
		return skobki(s, n + 1);
	}
}

int main(int argc, char* argv[])
{
	char* s = nullptr;
	s = new char[1000] {'0'};

	std::cin.getline(s, 1000);

	skobki(s, 0);

	delete[] s;

	return EXIT_SUCCESS;
}