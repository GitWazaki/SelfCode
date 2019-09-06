#include <stdio.h>

int main()
{
    int n, x;
    scanf("%d %d", &n, &x);
    int i = 1;
    int count = 0;
    while (i <= n)
    {
        int temp = i;
        while (temp > 0)
        {
            if (temp % 10 == x)
            {
                count++;
            }
            temp /= 10;
        }
        i++;
    } 
    printf("%d", count);
    return 0;
}