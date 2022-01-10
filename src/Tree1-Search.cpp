#include <iostream>
void PreOrder(int T); //前序遍历 
void InOrder(int T); //中序遍历 
void PostOrder(int T); //后序遍历 
class BNode
{
	public:
		char data;
		int lchild, rchild; 
}node[101];
int main()
{
	freopen("C:/Users/Eason/Desktop/input.txt", "r", stdin);
	freopen("C:/Users/Eason/Desktop/output.txt", "w", stdout);
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
	fclose(stdin);
	fclose(stdout);
}
void PreOrder(int T)
{
	using namespace std;
	if(T)
	{
		if(node[T].data)
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
	if(T)
	{
		PreOrder(node[T].lchild);
		if(node[T].data)
		{
			cout << node[T].data << " ";
		}
		PreOrder(node[T].rchild);
	}
}
void PostOrder(int T)
{
	using namespace std;
	if(T)
	{
		PreOrder(node[T].lchild);
		PreOrder(node[T].rchild);
		if(node[T].data)
		{
			cout << node[T].data << " ";
		}
	}
}
