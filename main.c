#include <stdio.h>

int main(void)
{
    int n;
    if (scanf("%d", &n) != 1)
    {
        return 0;
    }

    if (n < 0)
    {
        printf("NG");
        return 0;
    }

    long total = 0;
    for (long even = 2; even <= n; even += 2)
    {
        total += even;
    }

    printf("%ld", total);
    return 0;
}