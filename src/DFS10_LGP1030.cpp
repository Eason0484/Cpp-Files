#include <cstring>
#include <iostream>

using namespace std;

char s1[15], s2[15];

void DFS(int, int, int, int);

int main()
{
    int len, i;
    cin >> s1 >> s2 >> i;
    len = strlen(s1);
    DFS(0, len - 1, 0, len - 1);
    cout << "请按任意键继续...";
    cin.clear();
    cin.sync();
    cin.get();
    return 0;
}

void DFS(int l1, int r1, int l2, int r2)
{
    if (l1 > r1)
    {
        return;
    }
    int p;
    for (int i = l1; i <= r1; i++)
    {
        if (s1[i] == s2[r2])
        {
            p = i;
            break;
        }
    }
    cout << s1[p];
    DFS(l1, p - 1, l2, l2 + p - l1 - 1);
    DFS(p + 1, r1, r2 - r1 + p, r2 - 1);
}
