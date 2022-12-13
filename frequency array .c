#include<stdio.h>
#include<string.h>

void freq_arr_sort(char str[], int len)
{
    int freq[27];

    for(int i=1; i<=26; i++)
        freq[i] = 0;
    for(int i=0; i<len; i++)
        freq[(str[i] - 'a') + 1]++;
char ch;
    for(int i=1; i<=26; i++)
    {
        if(freq[i]!=0)
        {
            for(int j=1; j<=freq[i]; j++)
            {
                ch = i+96;
                printf("%c", ch);
            }
        }
    }
}

int main()
{
    char str[100];
    scanf("%s", str);
    int len = strlen(str);
    freq_arr_sort(str, len);

    return 0;
}
