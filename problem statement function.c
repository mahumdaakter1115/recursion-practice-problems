#include <stdio.h>
#include <math.h>

int prime_count(int p)
{
    int flag = 0;
    if (p == 1)
    {
        return 0;
    }

    for (int i = 2; i < p; i++)
    {
        if (p % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }

    return 0;
}

int even_check(int q)
{
    if (q % 2 == 0)
    {
        return 1;
    }

    else
    {
        return 0;
    }
}
int main()
{
    int number, count = 0, sum_of_even = 0,even_count=0;
    scanf("%d", &number);
    int arr[number];

    for (int i = 0; i < number; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < number; i++)
    {
        if (prime_count(*(arr + i)))
        {
            count++;
        }

        if (even_check(*(arr + i)))
        {
            sum_of_even += *(arr + i);
            even_count++;
        }
    }

    printf("Prime numbers: %d\n", count);

    float result = sum_of_even/even_count;

    printf("Average of all positive integers: %.2f\n",result);

    return 0;
}

