#include <cmath>
#include <iostream>
#include <stack>
#include <string>
using namespace std;
stack<int> s1;	  //存放数的栈
stack<char> s2;	  //存放符号
string s;		  //用string类型存储更方便，比如字符串拼接
int level(char p) //符号优先级
{
	if (p == '+' || p == '-')
		return 1;
	if (p == '*' || p == '/')
		return 2;
	if (p == '^')
		return 3;
	return 0;
}
void calc()
{
	int n, m;
	n = s1.top(); //栈是个倒序的，所以第二个操作数在栈顶
	s1.pop();
	m = s1.top(); //第一个操作数
	s1.pop();
	char z = s2.top(); //符号
	s2.pop();
	switch (z)
	{
	case '+':
		s1.push(m + n);
		break;
	case '-':
		s1.push(m - n);
		break;
	case '*':
		s1.push(m * n);
		break;
	case '/':
		s1.push(m / n);
		break;
	case '^':
		s1.push(pow(m, n));
		break;
	default:
		break;
	}
	return;
}
int main()
{
	cin >> s;
	s = '(' + s + ')'; //把s两端添加括号，方便最后运算
	int i = 0;		   //下标
	char ch = '(';	   //首位的(
	do
	{
		if (ch == '(') //如果符号是左括号，直接入栈即可
		{
			s2.push('(');
		}
		else if (ch == ')')
		{
			while (s2.top() != '(')
				calc(); //计算括号里所有的
			s2.pop();	//弹出(
		}
		else if (ch >= '0' && ch <= '9' || ch == '-' && s[i - 1] == '(') //如果这是个数，或者是个负数
		{
			int x, y; // x代表数，y代表符号
			if (ch == '-')
				x = 0, y = -1;
			else
				x = ch - '0', y = 1;
			char ch0 = s[++i];				 // ch的下一个符号是否是数字呢？ 会不会出现不是多位数呢？
			while ('0' <= ch0 && ch0 <= '9') //如果是数字，那么我们就把他转换成int型的整数啊
			{
				x = x * 10 + (ch0 - '0'); //简单的数学知识
				ch0 = s[++i];			  //等同于i = i + 1; ch0 = s[i];
			}
			x *= y;		//正负
			s1.push(x); //就找到一个数字了，把他入栈
			i--;
		}
		else //是个符号
		{
			while (level(ch) <= level(s2.top())) //当前运算符不超过栈顶运算，先算栈顶运算
			//举个例子, 1+2*3 乘法比加法优先级高，那么先算乘法
			{
				calc();
			}
			s2.push(ch); //直到当前运算符高于栈顶运算符再把运算符存栈
		}
	} while (ch = s[++i]);	  //这里挺巧的，读到空字符也就终止了
	cout << s1.top() << endl; //栈顶就是答案咯
	return 0;
}
