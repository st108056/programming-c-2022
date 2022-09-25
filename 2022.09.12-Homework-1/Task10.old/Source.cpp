#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	
	cin >> a >> b;

	d = a;

	if (d >= 0 && b > 0) {
		while (d > b) {
			d = d - b;
			c += 1;
		}
	} else if (d < 0 && b > 0) {
		while (d < -1 * b) {
			d = d + b;
			c += 1;
		}
		c = c * -1;
	} else if (d >= 0 && b < 0) {
		while (d > -1 * b) {
			d = d + b;
			c += 1;
		}
		c = -1 * c;
	}
	else if (d < 0 && b < 0) {
		while (d < b) {
			d = d - b;
			c += 1;
		}
	}

	cout << c << endl;

	return EXIT_SUCCESS;
}