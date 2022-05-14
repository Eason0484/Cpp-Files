#include <iostream>
void DFS(int);
bool Check();
int numbers, a[100], r;
bool visited[100];
int main(int argc, char **argv)
{
    using namespace std;
    cin >> numbers >> r;
    DFS(1);
    cout << "请按任意键继续...";
    cin.clear();
    cin.sync();
    cin.get();
    return 0;
}
bool Check()
{
    for (int i = 1; i <= r - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            return 0;
        }
    }
    return 1;
}
void DFS(int step)
{
    using namespace std;
    if (step == r + 1 && Check())
    {
        for (int i = 1; i <= r; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    else
    {
        for (int i = 1; i <= numbers; i++)
        {
            if (visited[i] == 0)
            {
                a[step] = i;
                visited[i] = 1;
                DFS(step + 1);
                visited[i] = 0;
            }
        }
    }
}
