#include <cstring>
#include <iostream>
using namespace std;
const int N = 100;
int plus_(int a[], int b[])
{ //����a+b,�ѽ������a
    int i, k;
    k = a[0] > b[0] ? a[0] : b[0]; //k��a��b��λ������һ����λ��
    for (i = 1; i <= k; i++) {
        a[i + 1] += (a[i] + b[i]) / 10; //�н�λ���Ƚ�λ
        a[i] = (a[i] + b[i]) % 10; //���㵱ǰλ����
    }
    if (a[k + 1] > 0)
        a[0] = k + 1; //�͵�λ����k��ʱ��������(a)��λ��(��a[0]=k)��ֵ
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
    //����Ϊ���벿��
    plus_(a, b);
    cout << "a+b=";
    for (i = a[0]; i > 0; i--)
        cout << a[i];
    return 0;
}
