#include <stdio.h>
int main(){
    char st[100];
    int count=0;
    scanf("%[^&]s",st);
    for (int i = 0; i < 100; i++)
    {
        if(st[i] == ' ' || st[i] == '\n' ){
            count++;
        }
    }
    printf( "no of words are %d", count);
    return 0;
}