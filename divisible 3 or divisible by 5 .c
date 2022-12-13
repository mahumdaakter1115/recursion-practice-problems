#include<stdio.h>

int div_three(int arr[], int *n)
{
    int count =0;
    for(int i=0; i<*n; i++)
    {
        if(arr[i]%3==0)
            count++;
    }

    return count;
}

int div_five(int arr[], int *n)
{
    int count =0;
    for(int i=0; i<*n; i++)
    {
        if(arr[i]%5==0 && arr[i]%3!=0)
            count++;
    }

    return count;
}

int main()
{
    int N;
    scanf("%d", &N);

    int arr[N];
    int total_count;

    for(int i=0; i<N; i++)
    {
        scanf("%d", &arr[i]);
    }

    if(div_five(arr, &N) || div_three(arr, &N))
    {
        total_count = div_five(arr, &N) + div_three(arr, &N);
        printf("%d", total_count);
    }
    else
    {
        return -1;
    }

    return 0;
}
