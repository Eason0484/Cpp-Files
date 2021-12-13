#include <iostream>
#include <cstring>
#include <stack>
#include <cstdio>
const int N = 1024;
using namespace std;
stack<int> exp;
string inputExp;
int Operate(string inputExp)
{
	int i, tmp[2], temp;
	for (i = 0; i < inputExp.length(); i++)
	{
		if (inputExp[i] == '+' || inputExp[i] == '-' || inputExp[i] == '*' || inputExp[i] == '/')
		{
			tmp[1] = exp.top();
			exp.pop();
			tmp[0] = exp.top();
			exp.pop();
			switch(inputExp[i])
			{
				case '+':
				{
					temp = tmp[0] + tmp[1];
					exp.push(temp);
					break;
				}
				case '-':
				{
					temp = tmp[0] - tmp[1];
					exp.push(temp);
					break;
				}
				case '*':
				{
					temp = tmp[0] * tmp[1];
					exp.push(temp);
					break;
				}
				case '/':
				{
					temp = tmp[0] / tmp[1];
					exp.push(temp);
					break;
				}
			}
		}
		else if (inputExp[i] >= '0' && inputExp[i] <='9')
		{
			temp = 0;
			while(inputExp[i] != ' ')
			{
				temp = temp * 10 + inputExp[i++] - '0';
				exp.push(temp);
			}
		}
	}
	return exp.top();
}
int main()
{
	getline(cin, inputExp);
	cout << Operate(inputExp) << endl;
	return 0;
}
