#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;

	cin >> n;

	cout << (n / 100) + ((n - (n / 100) * 100) / 10) + (n - (n / 10) * 10) << endl;

	return EXIT_SUCCESS;
}