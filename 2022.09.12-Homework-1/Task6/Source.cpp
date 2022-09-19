#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;

	cin >> n;

	cout << n + 1 + ((n + 1) % 2) << endl;

	return EXIT_SUCCESS;
}