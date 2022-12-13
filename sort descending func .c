#include<stdio.h>
#include<string.h>

void sorted_function(char str[], int *len)
{

    int i, j, temp;
    for(j=0; j<*len; j++)
    {
        for(i=0; i<*len-1; i++)
        {
            if(str[i] < str[i+1])
            {
               temp = str[i];
               str[i] = str[i+1];
               str[i+1] = temp;
            }
        }
    }
}
int main()
{
    char str[100];
    scanf("%s", str);
    int str_length = strlen(str);
    sorted_function(str, &str_length);
    printf("%s", str);
    return 0;
}
