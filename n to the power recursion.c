#include <stdio.h>
int power(int n,int m)
{
    if(m==0)
        return 1;
    else
        return (n*power(n,m-1));
}

void main()
{
    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);

    printf("%d^%d= %d\n",n,m,power(n,m));
}
