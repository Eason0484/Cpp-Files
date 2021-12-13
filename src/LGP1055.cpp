#include <cstring>
#include <iostream>
using namespace std;
int main()
{
    int i, sum, ISBN[13];
    string ISBN_s;
    for (i = 1; i <= 13; i++) {
        cin >> ISBN_s[i];
        ISBN[i] = ISBN_s[i] - '0';
    }
    sum = (ISBN[1] * 1 + ISBN[3] * 2 + ISBN[4] * 3 + ISBN[5] * 4 + ISBN[7] * 5 + ISBN[8] * 6 + ISBN[9] * 7 + ISBN[10] * 8 + ISBN[11] * 9) % 11;
    if (sum == ISBN[13])
        cout << "Right\n";
    else {
        ISBN[13] = sum;
        for (i = 1; i <= 13; i++) {
            if (ISBN[i] == 10)
                cout << 'X';
            else
                cout << char(ISBN[i] + '0');
        }
    }
    system("pause");
    return 0;
}
