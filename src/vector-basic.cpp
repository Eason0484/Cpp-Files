#include <iostream>
#include <vector>
int main(int argc, char **argv)
{
    using namespace std;
    vector<int> vec;
    for (int i = 0; i < 10; i++)
    {
        vec.push_back(i);
    }
    cout << vec.size() << endl;
    vec.erase(vec.begin() + 5);
    cout << vec.size() << endl;
    vector<int>::iterator it;
    for (it = vec.begin(); it != vec.end(); it++)
    {
        cout << (*it) << endl;
    }
    cout << "请按任意键继续...";
    cin.clear();
    cin.sync();
    cin.get();
    return 0;
}
