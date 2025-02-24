#include<iostream>
using namespace std;

int m, n;
int s[10];

int main()
{
	cin >> m >> n;
	for (int i = m; i <= n; i++)
	{
		for (int tmp = i; tmp; tmp /= 10)
		{
			s[tmp % 10]++;
		}
	}
	for (int i = 0; i <= 9; i++)
	{
		cout << s[i] << " ";
	}
	return 0;
}