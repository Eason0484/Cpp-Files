#include <cstring>
#include <iostream>
using namespace std;
const int N = 100;
int main()
{
    int a[N + 1], i;
    string s1;
    cin >> s1;
    memset(a, 0, sizeof(a));
    a[0] = s1.length();
    for (i = 1; i <= a[0]; i++)
        a[i] = s1[a[0] - i] - '0';
    for (i = a[0]; i > 0; i--)
        cout << a[i];
    cout << endl;
    return 0;
}
