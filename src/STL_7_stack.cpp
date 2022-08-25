// stack

#include <iostream>
#include <stack>

int main(int argc, char **argv)
{
    using namespace std;
    int a[] = {1, 3, 5, 7, 9, 11};
    int i;
    stack<int> st;
    if (st.empty())
    {
        for (i = 0; i < 3; ++i)
        {
            st.push(a[i]);
        }
    }
    for (i = 0; i < 2; ++i)
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
    for (int i = 3; i < 6; ++i)
    {
        st.push(a[i]);
    }
    printf("size is %d\n", st.size());
    int n = st.size();
    for (int i = 0; i < n; ++i)
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
    cout << "请按任意键继续. . .";
    cin.clear();
    cin.sync();
    cin.get();
    return 0;
}
