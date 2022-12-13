#include <stdio.h>
int addNum(int a, int b);         // function prototype

int main()
{
    int x,y,sum;

    printf("Enters two numbers: ");
    scanf("%d %d",&x,&y);

    sum = addNum(x, y);        // function call
    printf("sum = %d",sum);

    return 0;
}

int addNum(int a, int b)         // function definition
{
    int result;
    result = a+b;
    return result;                  // return statement
}
