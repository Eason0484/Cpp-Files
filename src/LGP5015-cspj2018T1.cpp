#include <cstring>
#include <iostream>
using namespace std;
int main()
{
    string s;
    int ans = 0, i;
    cin >> s;
    for (i = 0; i < s.size(); i++) {
        if (s[i] != ' ' && s[i] != '\n') {
            ans++;
        }
    }
    cout << ans << endl;
    system("pause");
    return 0;
}
