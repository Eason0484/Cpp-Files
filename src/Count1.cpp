#include <iostream>
#include <vector>
int main(int argc, char **argv)
{
    using namespace std;
    vector<int> v;
    int num, m, cnt;
    cin >> num >> m;
    for (int i = 1; i <= num; i++)
    {
        v.push_back(i);
    }
    cnt = 0;
    int i = 0;
    while (!v.empty())
    {
        cnt++;
        if (cnt == m)
        {
            cout << v[i] << " ";
            v.erase(v.begin() + i);
            cnt = 0;
        }
        else
        {
            i = (i + 1) % v.size();
        }
    }
    cout << "\n请按任意键继续...";
    cin.clear();
    cin.sync();
    cin.get();
    return 0;
}
