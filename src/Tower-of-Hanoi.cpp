#include <cstdio>
#include <iostream>
using namespace std;
int num = 0;
void hanoi(int n, char a, char b, char c)
{
    if (n == 1)
    {
        num++;
        printf("The %d time %c-->%c\n", num, a, c);
    }
    else
    {
        hanoi(n - 1, a, c, b);
        num++;
        printf("The %d time %c-->%c\n", num, a, c);
        hanoi(n - 1, b, a, c);
    }
}
int main()
{
    int n;
    cin >> n;
    hanoi(n, 'A', 'B', 'C');
    return 0;
}
