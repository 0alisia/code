#include<iostream>
using namespace std;

int t,n=0;
int a[105];
bool f[100000];

int main()
{
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		f[a[i]] = true;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (f[a[i] + a[j]]) t++;
			f[a[i] + a[j]] = false;
	
		}
	}
	cout <<  t;
	return 0;
}