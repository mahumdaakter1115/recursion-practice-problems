

#include<stdio.h>
void display(int n)
{
    if(n>0)
    {
        printf("%d ",n);
        display(n-1);
    }
}

int main()
{
    int x=5;
    display(x);
    return 0;
}


