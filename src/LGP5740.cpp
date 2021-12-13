#include <cstring>
#include <iostream>
using namespace std;
struct student {
    char name[100];
    int c, m, e;
};
int main()
{
    student a, max;
    int n, i;
    max.c = 0;
    max.m = 0;
    max.e = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%s%d%d%d", a.name, &a.c, &a.m, &a.e);
        if (a.c + a.m + a.e > max.c + max.m + max.e)
            max = a;
    }
    cout << max.name << " ";
    printf("%d %d %d\n", max.c, max.m, max.e);
    return 0;
}
