#include <cmath>
#include <cstdio>
using namespace std;
double pow2(double x)
{
    return x * x;
}
double dist(double x1, double x2, double y1, double y2)
{
    return sqrt(pow2(x1 - x2) + pow2(y1 - y2));
}
int main()
{
    double x1, x2, x3, y1, y2, y3, sum;
    scanf("%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3);
    sum = dist(x1, x2, y1, y2) + dist(x2, x3, y2, y3) + dist(x1, x3, y1, y3);
    printf("%.2f", sum);
    return 0;
}
