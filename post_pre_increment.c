#include <stdio.h>
int main(){
    int a,b,c,d;
    a=10;
    b=11;
    c=12;
    d=13;
    a=b++;
    b=a++;
    c=d++;
    d=++a;
    printf("%d %d %d %d",a,b,c,d);

    return 0;
}

// similarily decrement works
