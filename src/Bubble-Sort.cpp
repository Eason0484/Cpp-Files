#include <iostream>
using namespace std;
int main()
{
    int n, i, exchanger, j, mark;
    cin >> n;
    int input[n];
    for (i = 0; i < n; i++)
        cin >> input[i];
    for (i = n - 1; i >= 1; i--)
    {
        for (j = 0; j < i; j++)
        {
            if (input[j] > input[j + 1])
            {
                exchanger = input[j];
                input[j] = input[j + 1];
                input[j + 1] = exchanger;
            }
        }
    }
    for (i = 0; i < n; i++)
        cout << input[i] << " ";
    cout << endl
         << mark;
    return 0;
}
