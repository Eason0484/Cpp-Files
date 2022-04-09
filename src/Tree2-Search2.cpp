#include <iostream>
class BNode
{
public:
	char data;
	int lchild, rchild;
} node[101];
int root = 0, cnt = 0;
int BuildTree(int T);
void InOrder(int T);
void PostOrder(int T);
int main()
{
	using namespace std;
	root = BuildTree(0);
	InOrder(root);
	cout << endl;
	PostOrder(root);
	cout << "\n请按任意键继续..." << endl;
	cin.clear();
	cin.sync();
	cin.get();
	return 0;
}
int BuildTree(int T)
{
	using namespace std;
	char ch;
	cin >> ch;
	if (ch == '.')
	{
		return 0;
	}
	else
	{
		T = ++cnt;
		node[T].data = ch;
		node[T].lchild = BuildTree(T);
		node[T].rchild = BuildTree(T);
	}
	return T;
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
		InOrder(node[T].lchild);
		if (node[T].data)
		{
			cout << node[T].data << " ";
		}
		InOrder(node[T].rchild);
	}
}
void PostOrder(int T)
{
	using namespace std;
	if (T)
	{
		PostOrder(node[T].lchild);
		PostOrder(node[T].rchild);
		if (node[T].data)
		{
			cout << node[T].data << " ";
		}
	}
}
