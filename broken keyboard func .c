#include <stdio.h>
#include <string.h>
int c(int i)
{
    if (i % 2 != 0) {
        return 1;
    } else {
        return 0;
    }
}

int main()
{
    char str[100];
    scanf("%s", str);

    int len = strlen(str);
    char result[(len / 2) + len];
    int j = 0;
    for (int i = 0; i < len; i++) {
        result[j] = str[i];
        j++;

        if (c(i)) {
            result[j] = str[i];
            j++;
        }
    }
    result[j] = '\0';

    printf("%s\n", result);

    return 0;
}


