//��ά���������Ŀ��죬����x,y��Ϊ���꣬���������xy�����ı�
#include<iostream>
using namespace std;

int n;
int x = 1, y = 0;
int a[40][40];

int main()
{
	cin >> n;
	y = n / 2 + 1;
	for (int i = 1; i <= n * n; i++)
	{
		a[x][y] = i;
		if ((x == 1 && y == n) || a[x - 1][y + 1])x++;
		else if(x==1){
			x = n;
			y++;
		}
		else if (y == n)
		{
			x--;
			y=1;
		}
		else {
			x--;
			y++;
		}
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << a[i][j] <<" ";
		}
		cout << endl;
	}
	return 0;
}