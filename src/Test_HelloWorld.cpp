#include <iostream>
using namespace std;
int main()
{
    freopen("../build/input.txt", "r", stdin);
    freopen("../build/output.txt", "w", stdout);
    int a, b;
    cin >> a >> b;
    int sum = a + b;
    cout << sum << "\nHello,World!\n";
    fclose(stdin);
    fclose(stdout);
    return 0;
}
