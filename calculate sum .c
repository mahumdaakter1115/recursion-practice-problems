#include <stdio.h>
int main()
{
    int n,i,s=0,count=0;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        count++;
        if(count<=3)
        {
            s=s+i;
        }
        else if(count>3&&count<=6)
        {
            s=s-i;
        }
        if(count==6)
        {
            count=0;
        }
    }

    printf("%d\n",s);
    return 0;
}
