#include <iostream>
#include <string>
int main(int argc, char **argv)
{
    using namespace std;
    string input = argv[1];
    cout << input;
    cin.clear();
    cin.sync();
    cin.get();
    return 0;
}
