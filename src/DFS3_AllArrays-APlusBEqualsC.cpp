#include <iostream>
void DFS(int);
int numbers, a[100], b[4], cnt = 0;
bool visited[100];
int main(int argc, char **argv)
{
    using namespace std;
    numbers = 9;
    DFS(1);
    cout << cnt << endl;
    cout << "请按任意键继续...";
    cin.clear();
    cin.sync();
    cin.get();
    return 0;
}
void DFS(int step)
{
    using namespace std;
    if (step == numbers + 1)
    {
        b[1] = a[1] * 100 + a[2] * 10 + a[3];
        b[2] = a[4] * 100 + a[5] * 10 + a[6];
        b[3] = a[7] * 100 + a[8] * 10 + a[9];
        if (b[1] + b[2] == b[3] && b[1] < b[2])
        {
            cout << b[1] << " + " << b[2] << " = " << b[3] << endl;
            cnt++;
        }
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
