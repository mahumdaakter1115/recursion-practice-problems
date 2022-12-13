//number3,module 27
#include<stdio.h>
int main()
{
    int x,y,*ptrx, *ptry;
    scanf("%d%d",&x,&y);
    ptrx=&x;
    ptry=&y;
    printf("%d %d",*ptrx,*ptry);
}
