#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num1, num2,maxxNum;
    num1= 50;
    num2= 40;

    // result = condition ? exp1 : exp2;
    maxxNum = num1 >= num2 ? num1 : num2;
    printf("Maximum Number from %d and %d is %d", num1,num2,maxxNum);
    return 0;
}
