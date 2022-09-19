#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int x = 0;
	int a = 0;

	cin >> x >> a;

	a = x * x;

	cout << (a + 1) * (a + x) + 1 << endl;

	return EXIT_SUCCESS;
}