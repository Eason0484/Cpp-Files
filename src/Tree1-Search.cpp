#include <iostream>
void PreOrder(int T);  //ǰ�����
void InOrder(int T);   //�������
void PostOrder(int T); //�������
class BNode
{
public:
	char data;
	int lchild, rchild;
} node[101];
int main()
{
	using namespace std;
	int n, i;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cin >> node[i].data;
	}
	for (i = 1; i <= n; i++)
	{
		cin >> node[i].lchild >> node[i].rchild;
	}
	PreOrder(1);
	cout << endl;
	InOrder(1);
	cout << endl;
	PostOrder(1);
	cout << endl;
	getchar();
	return 0;
}
void PreOrder(int T)
{
	using namespace std;
	if (T)
	{
		if (node[T].data)
		{
			cout << node[T].data << " ";
		}
		PreOrder(node[T].lchild);
		PreOrder(node[T].rchild);
	}
}
void InOrder(int T)
{
	using namespace std;
	if (T)
	{
		PreOrder(node[T].lchild);
		if (node[T].data)
		{
			cout << node[T].data << " ";
		}
		PreOrder(node[T].rchild);
	}
}
void PostOrder(int T)
{
	using namespace std;
	if (T)
	{
		PreOrder(node[T].lchild);
		PreOrder(node[T].rchild);
		if (node[T].data)
		{
			cout << node[T].data << " ";
		}
	}
}
