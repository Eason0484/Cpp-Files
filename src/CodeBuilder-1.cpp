#include <iostream>
using namespace std;
int main()
{
    freopen("build.cpp", "w", stdout);
    cout << "#include <iostream>\nusing namespace std;\nint main()\n{\n    int a, b;\n    cin >> a >> b;\n";
    int i, j, a, b;
    cin >> a >> b;
    for (i = 0; i <= a; i++)
    {
        for (j = 0; j <= b; j++)
        {
            cout << "    if (a == " << i << " && ";
            cout << "b == " << j << ")";
            cout << " {\n";
            cout << "        cout << " << i + j << " << ";
            cout << "endl;\n";
            cout << "    }\n";
        }
    }
    cout << "    return 0;\n";
    cout << "}\n";
    fclose(stdout);
    return 0;
}
