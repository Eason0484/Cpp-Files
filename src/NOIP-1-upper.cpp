// #include <iostream>
// using namespace std;
// int main()
// {
//     char c[100];
//     int i;
//     cin >> c;
//     for (i = 0; c[i] != '\0'; i++) {
//         if (c[i] <= 'z' && c[i] >= 'a') {
//             c[i] -= 32;
//         }
//     }
//     cout << c << "\n";
//     return 0;
// }
#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
    char s;
    while (1)
    {
        s = getchar();
        if (s == EOF)
            break;
        if ('a' <= s && s <= 'z')
        {
            s -= 32;
            putchar(s);
        }
    }
    return 0;
}
