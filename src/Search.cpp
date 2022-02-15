#include <iostream>
using namespace std;
int main()
{
    int n, i, k, jilu = 0;
    cin >> n >> k;
    int a[n];
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (i = 0; i < n; i++)
    {
        if (a[i] == k)
        {
            jilu = i + 1;
            break;
        }
    }
    if (jilu == 0)
        cout << "No\n";
    else
        cout << jilu << endl;
}
