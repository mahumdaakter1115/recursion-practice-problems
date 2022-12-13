#include<stdio.h>
void sum_even_odd(int ara[], int *n)
{
    int i, index, sum =0;
    for(i=1; i<=*n; i++)
    {
        index = i;
        if(ara[i] % 2 == 0 && index % 2 == 0)
        {
            sum = sum + ara[i] + index;
        }
        if(ara[i] % 2 != 0 && index % 2 != 0)
        {
            sum = sum + ara[i] + index;
        }
    }
    printf("%d",sum);
}
int main ()
{
    int n, i, index, sum = 0;
    scanf("%d",&n);
    int ara[n+10];
    for(i=1; i<=n; i++)
    {
        scanf("%d",&ara[i]);
    }
    sum_even_odd(ara, &n);
return 0;
}
