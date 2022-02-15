#include <cstring>
#include <iostream>
#include <stack>
using namespace std;
char str[256];
stack<char> stk;
void Judge(char str[])
{
	int strLen = strlen(str);
	for (int i = 0; i < strLen && str[i] != '@'; i++)
	{
		if (str[i] == '(')
		{
			stk.push(str[i]);
		}
		else if (str[i] == ')')
		{
			if (stk.top() == '(')
			{
				stk.pop();
			}
			else if (stk.empty())
			{
				cout << "NO\n";
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
	Judge(str);
	return 0;
}
