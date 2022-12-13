#include <stdio.h>
int check(int i, int n) {
    if (i + (i + 2) + (i + 4) + (i + 6) == n) {
        return 1;
    } else {
        return 0;
    }
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t > 0 && t <= 3) {
        int n;
        scanf("%d", &n);

        for (int i = 2; i <= n; i += 2)
        {
            if (check(i, n)) {
                printf("%d %d %d %d\n", i, i + 2, i + 4, i + 6);
                break;
            }
        }

        t--;
    }

    return 0;
}
