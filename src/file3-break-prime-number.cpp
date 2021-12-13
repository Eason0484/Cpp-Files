#include <cstdio>
using namespace std;
int n, i;

int main()
{
    scanf("d", &n);
    for (i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            printf("%d ", i);
            n = n / i;
        }
    }
    if (n > 1)
        printf("%d ", n);
    return 0;
}
