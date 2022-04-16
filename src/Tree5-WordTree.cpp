#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;
string words[10001];
int n = 1;
int main(int argc, char **argv)
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    while (cin >> words[n])
    {
        n++;
    }
    n--;
    sort(words + 1, words + 1 + n);
    int sum = words[1].length();
    for (int i = 2; i <= n; i++)
    {
        int j;
        for (j = 0; j < words[i - 1].length(); j++)
        {
            if (words[i][j] != words[i - 1][j])
            {
                break;
            }
            sum += words[i].length() - j;
        }
    }
    cout << sum + 1;
    fclose(stdin);
    fclose(stdout);
    cout << "请按任意键继续...";
    cin.clear();
    cin.sync();
    cin.get();
    return 0;
}
