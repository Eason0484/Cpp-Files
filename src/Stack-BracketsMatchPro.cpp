#include <iostream>
#include <cstring>
#include <stack>
using namespace std;
stack<char> stk;
char order[8] = {'{','[','(','<','}',']',')','>'};
char str[256][256];
void Judge(char str[])
{
	int i, j, strLen = strlen(str);
	for (i = 0; i < strLen; i++)
	{
		stk.push(str[i]);
		if (str[i] == order[4] || str[i] == order[5] || str[i] == order[6] || str[i] == order[7])
		{
			if(stk.empty())
			{
				cout << "WRONG\n";
				return;
			}
			else
			{
				for (j = 0; j <= 3; j++)
				{
					if (stk.top() == order[j] && str[i] == order[j + 3])
					{
						stk.pop();
					}
				}
			}
			for (j = 0; j <= 3; j++)
			{
				if (stk.top() == order[j] && str[i] != order[j + 3])
				{
					cout << "WRONG\n";
					return;
				}
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
		cout << "WRONG\n";
		return;
	}
}
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> str[i];
	}
	for (int i = 0; i < n; i++)
	{
		Judge(str[i]);
	}
	return 0;
}
