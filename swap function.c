#include <stdio.h>

void swap(int *x, int *y);
int main()
{
    int n, i;
    scanf("%d", &n);
    int a[n + 1];
    for (i = 1; i <= n; i++)
    {
        scanf("%d ", &a[i]);
    }

    int k;
    scanf("%d", &k);

    while (k--)
    {
        int l, r;
        scanf("%d %d", &l, &r);
        swap(&a[l], &a[r]);
        for (i = 1; i <= n; i++)
        {
            printf("%d ", a[i]);
        }
        printf("\n");
    }

    return 0;
}

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
