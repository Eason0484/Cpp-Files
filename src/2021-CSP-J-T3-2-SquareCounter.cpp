#include <iostream>
using namespace std;
struct point
{
    int x, y, id;
};
bool equals(point a, point b)
{
    return a.x == b.x && a.y == b.y;
}
bool cmp(point a, point b)
{
    return ①;
}
void sort(point A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (cmp(A[j], A[j - 1]))
            {
                point t = A[j];
                A[j] = A[j - 1];
                A[j - 1] = t;
            }
        }
    }
}
int unique(point A[], int n)
{
    int t = 0;
    for (int i = 0; i < n; i++)
    {
        if (②)
        {
            A[t++] = A[i];
        }
    }
    return t;
}
bool binary_search(point A[], int n, int x, int y)
{
    point p;
    p.x = x;
    p.y = y;
    p.id = n;
    int a = 0, b = n - 1;
    while (a < b)
    {
        int mid = ③;
        if (④)
        {
            a = mid + 1;
        }
        else
        {
            b = mid;
        }
    }
    return equals(A[a], p);
}

const int MAXN = 1000;
point A[MAXN];

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i].x >> A[i].y;
        A[i].id = i;
    }
    sort(A, n);
    n = unique(A, n);
    int ans = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (⑤ && binary_search(A, n, A[i].x, A[j].y) &&
                binary_search(A, n, A[j].x, A[i].y))
            {
                ans++;
            }
    cout << ans << endl;
    return 0;
}
