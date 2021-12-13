#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int num;
    cin >> num;

    vector<int> vecNum;
    int temp;
    for (int i = 0; i < num; ++i)
    {
        cin >> temp;
        vecNum.push_back(temp);
    }

    for (vector<int>::iterator itr = vecNum.begin(); itr != vecNum.end(); ++itr)
    {
        cout << *itr << endl;
    }

    return 0;
}
