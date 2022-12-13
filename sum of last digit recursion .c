#include<stdio.h>

int is_digit(int arr[],int n)
{
    int sum=0,i;

    if(n==0) return 0;
    {
        for(i=0; i<n; i++)
        {
            if(arr[i]!=0)
            {
                sum+=arr[i]%10;
            }
            is_digit(arr+1,n-1);
        }
    }

    return sum;
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum = is_digit(arr,n);
    printf("Total sum of last digit : %d",sum);
    return 0;
}
