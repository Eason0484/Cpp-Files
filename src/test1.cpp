#include <iostream>
using namespace std;
int main()
{
    int input, i, j, k;
    cin >> input;
    for (i = 1; i <= input; i++)
    {
        for (j = 1; j <= input - i; j++)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << "#";
            for (k = i - 1; k >= i; k--)
            {
                cout << "#";
            }
        }        
        cout << endl;
    }
    for (i = input - 1; i >= 1; i--)
    {
        for (j = 1; j <= input - i; j++)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << "#";
            for (k = i - 1; k >= i; k--)
            {
                cout << "#";
            }
        }
        cout << endl;
    }
    return 0;
}
