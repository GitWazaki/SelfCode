#include <stdio.h>

int main()
{
    int k;
    double s = 0;
    double n = 1;
    scanf("%d", &k);
    while (s <= k)
    {
        s += 1 / n;
        n += 1;
    }
    printf("%d", (int)(n - 1));
}