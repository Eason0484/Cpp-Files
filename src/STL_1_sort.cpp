// Sort

#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>

int main(int argc, char **argv)
{
    using namespace std;
    int a[100], n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + 5);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    sort(a + n - 5, a + n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "请按任意键继续...";
    cin.clear();
    cin.sync();
    cin.get();
    return 0;
}
