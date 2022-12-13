#include <stdio.h>
#include <string.h>
int alphabets (char a){
    int ascii=a;
    return (ascii-96);
}
void print(int i, int count){
    for(int c=0;c<count;c++){
        printf("%c",i+96);
    }
}

int main ( ){
    int freq[27];
    for(int i = 0;i<=27;i++){
        freq[i]=0;
    }
    char word[100];
    gets(word);
    int n=strlen(word);
    for(int i=0;i<n;i++){
        freq[alphabets(word[i])]++;

    }
    for(int i=1;i<27;i++){
        print(i,freq[i]);
    }
    return 0;
}
