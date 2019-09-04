#include <stdio.h>

int main()
{
    int total;
    long long int money = 99999999999;
    int num, price;
    int i;
    scanf("%d", &total);
    for (i = 3; i > 0; i--)
    {
        scanf("%d %d", &num, &price);
        int n = (total % num == 0) ? total / num : total / num + 1;
        if (n * price < money)
        {
            money = n * price;
        }
    }
    printf("%ld", money);
    return 0;
}