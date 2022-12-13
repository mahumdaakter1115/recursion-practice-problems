#include<stdio.h>
int is_seven(int *arr, int *n)
{
    int count = 0;
    int last_digit;

    for(int i=0; i<*n; i++)
    {
        last_digit = *(arr + i)%10;
        *(arr + i) = *(arr + i)/10;
        if(last_digit==7)
            return 1;
    }

    return 0;
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int count = 0;

    for(int i=0; i<n; i++)
    {
        if(is_seven(arr, &n))
            count++;
    }

    if(n%2==0 && count>=n/n)
    {
        printf("Beautiful");
    }
    else if(n%2!=0 && count<=(n/2)+1)
    {
        printf("Ugly");
    }

    return 0;
}
