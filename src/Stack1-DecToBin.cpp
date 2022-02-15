#include <iostream> // 十进制转二进制
using namespace std;
const int MAXN = 101;
int bin[MAXN], top = 0;
void Push(int item)
{
	top++;
	bin[top] = item;
}
void Search()
{
	int i;
	for (i = top; i >= 1; i--)
	{
		cout << bin[i];
	}
	cout << endl;
}
void PushToBin(int num)
{
	if (num == 0)
	{
		Push(num);
	}
	while (num != 0)
	{
		int tmp = num % 2;
		num /= 2;
		Push(tmp);
	}
}
int main()
{
	int dec, i, n;
	cin >> dec;
	PushToBin(dec);
	Search();
	return 0;
}
