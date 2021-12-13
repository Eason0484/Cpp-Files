#include <iostream>
using namespace std;
int main()
{
    int m, n;
    long long x, y, ansrec = 0, anssqu = 0;
    cin >> n >> m; //n*m
    for (x = 1; x <= n; x++) {
        for (y = 1; y <= m; y++) {
            if(x==y)
            	anssqu += (n-x+1)*(m-y+1);
            else
            	ansrec += (n-x+1)*(m-y+1);
        }
    }
    cout << anssqu << " " << ansrec << endl;
    system("pause");
    return 0;
}
