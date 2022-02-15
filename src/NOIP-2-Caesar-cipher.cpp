#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
    int n;
    char s[50];
    cin >> n;
    cin >> s;
    int i;
    for (i = 0; s[i] != '\0'; i++)
    {
        s[i] = ((s[i] - 'a' + n) % 26 + 'a');
    }
    cout << s << endl;
    return 0;
}
