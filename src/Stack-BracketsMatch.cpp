#include <cstring>
#include <stack>
#include <iostream>
using namespace std;
stack<char> stk;
char str[256];

void Operate(char str[])
{
	int i, strLen = strlen(str);
	for (i = 0; i < strLen; i++)
	{
		if (str[i] == '(' || str[i] == '[')
		{
			stk.push(str[i]);
		}
		else if (str[i] == ')' || str[i] == ']')
		{
			if(stk.empty())
			{
				cout << "WRONG\n";
				return;
			}
			else if (stk.top() == '(' && str[i] == ')')
			{
				stk.pop();
			}
			else if (stk.top() == '[' && str[i] == ']')
			{
				stk.pop();
			}
			else if (stk.top() == '(' && str[i] != ')')
			{
				cout << "WRONG\n";
				return;
			}
			else if (stk.top() == '[' && str[i] != ']')
			{
				cout << "WRONG\n";
				return;
			}
		}
	}
	if (stk.empty())
	{
		cout << "YES\n";
		return;
	}
	else
	{
		cout << "NO\n";
		return;
	}
}

int main()
{
	cin >> str;
	Operate(str);
	return 0;
}
