#include <stdio.h>

int main()
{
    double target;
    double p = 2;
    double distance = 0;
    int count = 0;
    scanf("%lf", &target);
    while (distance < target)
    {
        distance += p;
        p *= 0.98;
        count++;
    }
    printf("%d", count);
}