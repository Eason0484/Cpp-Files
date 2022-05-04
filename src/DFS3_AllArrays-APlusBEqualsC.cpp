#include <iostream>
bool CheckReply();
void DFS(int);
int a[11], sum[3];
bool v[11];
int main(int argc, char **argv)
{
    using namespace std;
}
bool CheckReply()
{
    for (int i = 1; i <= 10; i++)
    {
        for (int j = i; j <= 10; j++)
        {
            if (a[i] == a[j])
            {
                return 1;
            }
        }
    }
    return 0;
}
void DFS(int step)
{
    using namespace std;
    if (step == 11)
    {
        for (int i = 1; i <= 10; i++)
        {
            cout << a[i] << " ";
        }
    }
    else
    {
        for (int i = 1; i <= 10; i++)
        {
            if (v[i] == 0)
            {
                a[step] = i;
                v[i] = 1;
                DFS(step + 1);
                v[i] = 0;
            }
        }
    }
}
