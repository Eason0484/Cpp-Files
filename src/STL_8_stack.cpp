#include <iostream>
#include <stack>

using namespace std;
stack<char> stk;

void StkPush(char, char);
void StkPop(char, char);

int main(int argc, char **argv)
{
    StkPush('A', 'B');
    StkPop('B', 'A');
    StkPush('C', 'C');
    StkPop('C', 'C');
    StkPush('D', 'F');
    StkPop('F', 'D');
    cout << "请按任意键继续. . .";
    cin.clear();
    cin.sync();
    cin.get();
    return 0;
}

void StkPush(char a, char b)
{
    for (char i = a; i <= b; i++)
    {
        stk.push(i);
    }
}

void StkPop(char a, char b)
{
    for (char i = 'A'; i <= b - a; i++)
    {
        cout << stk.top() << endl;
        stk.pop();
    }
}
