#include <iostream>
#include <string>
using namespace std;
void DFS(int);
int numbers;
string str, a;
bool visited[11];
int main(int argc, char **argv)
{
    cin >> str;
    numbers = str.length();
    DFS(0);
    cout << "请按任意键继续...";
    cin.clear();
    cin.sync();
    cin.get();
    return 0;
}
void DFS(int step)
{
    if (step == numbers)
    {
        for (int i = 0; i < numbers; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    else
    {
        for (int i = 0; i < numbers; i++)
        {
            if (visited[i] == 0)
            {
                a[step] = str[i];
                visited[i] = 1;
                DFS(step + 1);
                visited[i] = 0;
            }
        }
    }
}
