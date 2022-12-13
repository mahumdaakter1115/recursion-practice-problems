#include<stdio.h>
void function(int x, int y, int* p, int*q)
{
    *p = x<y? x:y;
    *q = x>y? x:y;
}
int main()
{
    int a=15, b=34;
    int small, large;
    function (a,b, &small,&large);
    printf("%d %d\n", small, large);
return 0;
}
