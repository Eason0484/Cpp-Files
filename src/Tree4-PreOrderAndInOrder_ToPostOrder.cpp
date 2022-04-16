#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;
string s1, s2;
void PostOrderGenerator(int, int, int, int);
int main()
{
    cin >> s1 >> s2;
    PostOrderGenerator(0, s1.length() - 1, 0, s2.length() - 1);
    cout << "\n请按任意键继续...";
    cin.clear();
    cin.sync();
    cin.get();
    return 0;
}

void PostOrderGenerator(int iLeft1, int iRight1, int iLeft2, int iRight2)
{
    int mid = s2.find(s1[iLeft1]);
    if (mid > iLeft2)
    {
        PostOrderGenerator(iLeft1 + 1, iLeft1 + mid - iLeft2, iLeft2, mid - 1);
    }
    if (mid < iLeft2)
    {
        PostOrderGenerator(iLeft1 + mid - iLeft2 + 1, iRight1, mid + 1, iRight2);
    }
    cout << s1[iLeft1];
}
