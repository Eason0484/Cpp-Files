// set

#include <cstring>
#include <iostream>
#include <set>

using namespace std;

int main(int argc, char **argv)
{
    set<string> st;
    string nm[] = {"abc",
                   "david",
                   "lucy",
                   "abc",
                   "app",
                   "lucy"};
    for (int i = 0; i < 6; ++i)
    {
        st.insert(nm[i]);
    }
    set<string>::iterator it;
    for (it = st.begin(); it != st.end(); ++it)
    {
        cout << *it << endl;
    }
    it = st.find("app");
    if (it != st.end())
    {
        cout << "find"
             << " "
             << "app" << endl;
    }
    else
    {
        cout << "can't find"
             << " "
             << "app" << endl;
    }
    it = st.find("bld");
    if (it != st.end())
    {
        cout << "find"
             << " "
             << "bld" << endl;
    }
    else
    {
        cout << "can't find"
             << " "
             << "bld" << endl;
    }
    for (set<string>::iterator it = st.lower_bound("dad"); it != st.end(); ++it)
    {
        cout << *it << ' ';
    }
    cout << endl;
    cout << "请按任意键继续...";
    cin.clear();
    cin.sync();
    cin.get();

    return 0;
}
