#include <cstdio>
#include <iostream>
#include <stack>
using namespace std;
const int N = 1024;
stack<int> station;
void Operate(int trains[], int trainNum)
{
	int i, current = 1;
	for (i = 0; i < trainNum; i++)
	{
		while (current <= trains[i])
		{
			station.push(current);
			current++;
		}
		if (station.top() == trains[i])
		{
			station.pop();
		}
		else
		{
			cout << "NO\n";
			return;
		}
	}
	cout << "YES\n";
	return;
}
int main()
{
	int trainNum, i, trains[N];
	cin >> trainNum;
	for (i = 0; i < trainNum; i++)
	{
		cin >> trains[i];
	}
	Operate(trains, trainNum);
	return 0;
}
