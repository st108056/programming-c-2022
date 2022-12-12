#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int m = 0;
	int l = 0;
	int cnt = 0;
	int ch = 0;
	int t = 0;

	std::cin >> n;
	std::cin >> m;

	int* a = new int[n] { 0 };
	int* b = new int[m] { 0 };

	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}
	
	for (int i = 0; i < m; ++i)
	{
		std::cin >> b[i];
	}

	l = (m <= n ? m : n);

	int* c = new int[l] { 0 };

	for (int i = 0; i < n; ++i)
	{
		for (int k = 0; k < cnt; ++k)
		{
			if (c[k] == a[i])
			{
				ch = 1;
				break;
			}
		}
		if (ch != 1)
		{
			for (int j = 0; j < m; ++j)
			{
				if (a[i] == b[j])
				{
					c[cnt] = a[i];
					++cnt;
					break;
				}
			}
		}
		else
		{
			ch = 0;
		}
	}
	
	delete[]a;
	delete[]b;
	
	for (int i = 0; i < cnt + 1; ++i)
	{
		for (int j = 0; j < cnt - i - 1; ++j)
		{
			if (c[j] > c[j + 1])
			{
				t = c[j];
				c[j] = c[j + 1];
				c[j + 1] = t;
			}
		}
	} 

	for (int i = 0; i < cnt; ++i)
	{
		std::cout << c[i] << " ";
	}

	delete[]c;

	return EXIT_SUCCESS;
}