#include <cstring>
#include <iostream>
using namespace std;
const int N = 100;
int compare(int a[], int b[])
{ //a>b,return 1;a<b,return -1;a=b,return 0
    int i;
    if (a[0] > b[0])
        return 1; //a��λ��>b��λ��,��a>b
    if (a[0] < b[0])
        return -1; //a��λ��<b��λ��,��a<b
    for (i = a[0]; i > 0; i--) { //�Ӹ�λ����λ��λ�Ƚ�
        if (a[i] > b[i])
            return 1;
        if (a[i] < b[i])
            return -1;
    }
    return 0; //��λ����ȣ����������
}
int main()
{
    cout << "a>b,return 1\n";
    cout << "a<b,return -1\n";
    cout << "a=b,return 0\n";
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
    cout << compare(a, b);
    return 0;
}
