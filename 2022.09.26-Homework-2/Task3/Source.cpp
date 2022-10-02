#include <iostream>

int main() {

    int k = 0;
    int m = 0;
    int n = 0;
	int c = 0;

    std::cin >> k >> m >> n;

	if (n <= k)
	{
		c = 2 * m;
	}
	else if (n * 2 % k == 0)
	{
		c = m * (n * 2 / k);
	}
	else
	{
		c = m * (1 + (n * 2 / k));
	}
	
	std::cout << c << std::endl;

	return EXIT_SUCCESS;
}