#include <cstdio>
#include <iostream>
#include <stack>
using namespace std;
stack<char> exp;
char input[101];
int Search(int pos, char aim)
{
	int i = pos;
	while (input[i] != '@')
	{
		if (input[i] == aim)
		{
			return i;
		}
		i++;
	}
	return -1;
}
bool Operate()
{
	int i = 0, judge;
	judge = Search(0, '@');
	if (judge == -1)
	{
		return 0;
	}
	while (input[i] != '@')
	{
		exp.push(input[i]);
		if (exp.top() == '(')
		{
			int pos = Search(i, ')');
			if (pos = -1)
			{
				return 0;
			}
			else
			{
				exp.push(input[pos]);
				input[pos] = '0';
			}
		}
		i++;
	}
	return 1;
}
int main()
{
	int judge;
	cin >> input;
	judge = Operate();
	if (judge == 1)
	{
		cout << "YES\n";
	}
	else if (judge == 0)
	{
		cout << "NO\n";
	}
	return 0;
}
