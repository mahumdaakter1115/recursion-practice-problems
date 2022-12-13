#include<stdio.h>

int main ()
{
    int n, i, index, sum = 0;
    scanf("%d",&n);
    int ara[n+10];
    for(i=1; i<=n; i++){
        scanf("%d",&ara[i]);
        index = i;
        if(ara[i] % 2 == 0 && index % 2 == 0){

            sum = sum + ara[i] + index;
        }
         if(ara[i] % 2 != 0 && index % 2 != 0)
            {

            sum = sum + ara[i] + index;
        }

    }
    printf("%d",sum);

    return 0;
}
