// Vector

#include <iostream>
#include <vector>

int main()
{
    using namespace std;
    vector<int> a;
    for (int i = 0; i < 5; i++)
    {
        a.push_back(i);
    }
    for (int i = 0; i < a.size(); ++i)
    {
        printf("%d", a[i]);
    }
    puts("");
    vector<int>::iterator it = a.begin();
    a.erase(it + 2);
    for (int i = 0; i < a.size(); ++i)
    {
        printf("%d", a[i]);
    }
    cout << "请按任意键继续...";
    cin.clear();
    cin.sync();
    cin.get();
    return 0;
}
