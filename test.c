#include <stdio.h>
void swap(int* x, int* y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
     printf("x=%d y=%d\n", *x, *y);
}

// Main function
int main()
{
    int a = 5, b = 10;
     printf("a=%d b=%d\n", a, b);


    // Pass reference
    swap(&a, &b);

    //printf("a=%d b=%d\n", a, b);

    return 0;
}

