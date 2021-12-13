#include <cstring>
#include <iostream>
using namespace std;
const int N = 100;
int plus_(int a[], int b[])
{ //计算a+b,把结果赋给a
    int i, k;
    k = a[0] > b[0] ? a[0] : b[0]; //k是a和b中位数最大的一个的位数
    for (i = 1; i <= k; i++) {
        a[i + 1] += (a[i] + b[i]) / 10; //有进位，先进位
        a[i] = (a[i] + b[i]) % 10; //计算当前位数字
    }
    if (a[k + 1] > 0)
        a[0] = k + 1; //和的位数比k大时，修正和(a)的位数(即a[0]=k)的值
    else
        a[0] = k;
    return 0;
}
int main()
{
    int a[N + 1], b[N + 1], i;
    string s1, s2;
    cout << "a=";
    cin >> s1;
    memset(a, 0, sizeof(a));
    a[0] = s1.length();
    for (i = 1; i <= a[0]; i++)
        a[i] = s1[a[0] - i] - '0';
    cout << "b=";
    cin >> s2;
    memset(b, 0, sizeof(b));
    b[0] = s2.length();
    for (i = 1; i <= b[0]; i++)
        b[i] = s2[b[0] - i] - '0';
    //以上为输入部分
    plus_(a, b);
    cout << "a+b=";
    for (i = a[0]; i > 0; i--)
        cout << a[i];
    return 0;
}
