#include<stdio.h>

void average_of_even(int *arr, int *n)
{
    int sum = 0, count = 0;
    float avg;

    for(int i=0; i<*n; i++)
    {
        if(*(arr+i)%2==0)
        {
            sum+=*(arr+ i);
            count++;
        }
    }
    avg=sum/count;

    printf("Average of all even integers: %0.2f", avg);
}

int is_prime(int n)
{
    for(int i=2; i<n; i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    int count = 0;
    for(int i=0; i<n; i++)
    {
        if(is_prime(arr[i]))
        {
            count++;
        }
    }

    printf("Prime numbers: %d\n", count);
    average_of_even(arr, &n);

    return 0;
}
