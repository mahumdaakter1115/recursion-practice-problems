//output koto size nibo first declare then how number like= 7 output , then declare all 7 number

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int* ptr;
    ptr= (int*) malloc(n* sizeof (int));
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }
    for(i=0;i<n;i++)
    {
        printf("%d th position ->%d\n", i,*(ptr+i));
    }

    free(ptr);
    return 0;
}