#include <cmath>
#include <iostream>
#include <stack>
#include <string>
using namespace std;
stack<int> s1;	  //�������ջ
stack<char> s2;	  //��ŷ���
string s;		  //��string���ʹ洢�����㣬�����ַ���ƴ��
int level(char p) //�������ȼ�
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
	n = s1.top(); //ջ�Ǹ�����ģ����Եڶ�����������ջ��
	s1.pop();
	m = s1.top(); //��һ��������
	s1.pop();
	char z = s2.top(); //����
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
	s = '(' + s + ')'; //��s����������ţ������������
	int i = 0;		   //�±�
	char ch = '(';	   //��λ��(
	do
	{
		if (ch == '(') //��������������ţ�ֱ����ջ����
		{
			s2.push('(');
		}
		else if (ch == ')')
		{
			while (s2.top() != '(')
				calc(); //�������������е�
			s2.pop();	//����(
		}
		else if (ch >= '0' && ch <= '9' || ch == '-' && s[i - 1] == '(') //������Ǹ����������Ǹ�����
		{
			int x, y; // x��������y�������
			if (ch == '-')
				x = 0, y = -1;
			else
				x = ch - '0', y = 1;
			char ch0 = s[++i];				 // ch����һ�������Ƿ��������أ� �᲻����ֲ��Ƕ�λ���أ�
			while ('0' <= ch0 && ch0 <= '9') //��������֣���ô���ǾͰ���ת����int�͵�������
			{
				x = x * 10 + (ch0 - '0'); //�򵥵���ѧ֪ʶ
				ch0 = s[++i];			  //��ͬ��i = i + 1; ch0 = s[i];
			}
			x *= y;		//����
			s1.push(x); //���ҵ�һ�������ˣ�������ջ
			i--;
		}
		else //�Ǹ�����
		{
			while (level(ch) <= level(s2.top())) //��ǰ�����������ջ�����㣬����ջ������
			//�ٸ�����, 1+2*3 �˷��ȼӷ����ȼ��ߣ���ô����˷�
			{
				calc();
			}
			s2.push(ch); //ֱ����ǰ���������ջ��������ٰ��������ջ
		}
	} while (ch = s[++i]);	  //����ͦ�ɵģ��������ַ�Ҳ����ֹ��
	cout << s1.top() << endl; //ջ�����Ǵ𰸿�
	return 0;
}
