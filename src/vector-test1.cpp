#include <iostream>
#include <vector>
int main(int argc, char **argv)
{
    using namespace std;
    vector<int> v;
    for (int i = 9; i >= 4; i--)
    {
        v.push_back(i);
    }
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] % 2 != 0)
        {
            v.erase(v.begin() + i);
        }
    }
    cout << v.size() << endl;
    cout << "请按任意键继续...";
    cin.clear();
    cin.sync();
    cin.get();
    return 0;
}
