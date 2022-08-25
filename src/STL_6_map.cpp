// map

#include <cstring>
#include <iostream>
#include <map>

int main(int argc, char **argv)
{
    using namespace std;
    map<string, int> mp;
    string nm[] = {
        "abc",
        "david",
        "lucy",
        "abc",
        "app",
        "lucy",
    };
    int index = 1;
    for (int i = 0; i < 6; ++i)
    {
        if (mp[nm[i]] == 0)
        {
            mp[nm[i]] = index++;
        }
    }
    map<string, int>::iterator it;
    for (it = mp.begin(); it != mp.end(); ++it)
    {
        cout << it->first << " " << it->second << endl;
    }
    cout << "请按任意键继续...";
    cin.clear();
    cin.sync();
    cin.get();
    return 0;
}
