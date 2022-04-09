#include <iostream>
int tree[101];
int main()
{
    using namespace std;
    int nodes, nodeX, nodeY, m;
    cin >> m >> nodes;
    for (int i = 1; i <= m; i++)
    {
        cin >> nodeX >> nodeY;
        tree[nodeY] = nodeX;
    }
    int root;
    for (int i = 1; i <= nodes; i++)
    {
        if (tree[i] == 0)
        {
            root = i;
            break;
        }
    }
    int maxroot, cnt = 0, maxcnt = 0;
    for (int i = 1; i <= nodes; i++)
    {
        cnt = 0;
        for (int j = 1; j <= nodes; j++)
        {
            if (tree[j] == i)
            {
                cnt++;
            }
        }
        if (cnt > maxcnt)
        {
            maxcnt = cnt;
            maxroot = i;
        }
    }
    cout << root << endl
         << maxroot << endl;
    for (int i = 1; i <= nodes; i++)
    {
        if (tree[i] == maxroot)
        {
            cout << i << " ";
        }
    }
    cout << endl;
    cout << "请按任意键继续...";
    cin.clear();
    cin.sync();
    cin.get();
    return 0;
}
