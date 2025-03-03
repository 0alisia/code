#include<iostream>
using namespace std;

const int N = 100010;
int head, e[N], ne[N], idx,n;

//链表初始化
void init()
{
	head = -1;
	idx = 0;
}

//x插入头结点
void add_to_head(int x)
{
	e[idx] = x;//储存要插入的值
	ne[idx] = head;//被插入的值代替head指向下一个值
	head = idx;//head由指向空指针转为指向第一个元素
	idx++;//指针后移，为下次插入做好准备
}

//将x插入下标为k的点后面
void add(int k, int x)
{
	e[idx] = x;//储存值
	ne[idx] = ne[k];//被插入x的指针，指向原本元素的下一个位置
	ne[k] = idx;//原来的元素指向自己
	idx++ ;
}
//删掉k后面的节点
void remove(int k)
{
	ne[k] = ne[ne[k]];
}

int main()
{
	cin >> n;
	init();
	for (int i = 0; i < n; i++)
	{
		char s;
		cin >> s;
		if (s == 'H')
		{
			int x;
			cin >> x;
			add_to_head(x);
		}
		if (s == 'D')
		{
			int k;
			cin >> k;
			if (k == 0) head = ne[head];
			remove(k-1);
		}
		if (s == 'I')
		{
			int k, x;
			cin >> k >> x;
			add(k-1, x);
		}
	}
	for (int i = head; i != -1; i = ne[i])
	{
		cout << e[i] << ' ';
	}
	cout << endl;
	return 0;
}