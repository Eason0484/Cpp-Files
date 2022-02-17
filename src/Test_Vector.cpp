#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int num;
    cin >> num;

    vector<int> vecNums;
    int temp;
    for (int i = 0; i < num; ++i)
    {
        cin >> temp;
        vecNums.push_back(temp);
    }

    for (vector<int>::iterator itr = vecNums.begin(); itr != vecNums.end(); ++itr)
    {
        cout << *itr << endl;
    }

    return 0;
}
