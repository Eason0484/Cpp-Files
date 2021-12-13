#include <iostream>
#include <cstdio>
using namespace std;
const int N = 101;
int stack[N]={0}, top = 0;
void Search()
{
	if(top == 0)
	{
		cout << "Null\n\n";
	}
	else
	{
		for(int i = 1; i <= top; i++)
		{
			cout << stack[i] << endl;
		}
		cout << endl;
	}
}
void Push(int item)
{
	if(top < N)
	{
		top++;
		stack[top] = item;
	}
}
void Pop()
{
	if(top > 0){
		top--;
	}
}
void Clear()
{
	top = 0;
}
int GetTop()
{
	return stack[top];
}
bool IsEmpty()
{
	if(top == 0)
	{
		return 1;
	}
	return 0;
}
int main()
{
	Push(3);
	Push(4);
	Push(5);
	Search();
	cout << IsEmpty() << " " << GetTop() << endl << endl;
	Pop();
	Search();
	cout << IsEmpty() << " " << GetTop() << endl << endl;
	Clear();
	Search();
	cout << IsEmpty() << " " << GetTop() << endl << endl;
	return 0;
}

