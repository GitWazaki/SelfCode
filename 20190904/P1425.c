#include<stdio.h>

int main(){
    int a, b, c, d;
    int dt, e, f;
    scanf("%d %d %d %d",&a, &b, &c, &d);
    dt = c*60 + d - a*60 - b;
    e = dt / 60;
    f = dt % 60;
    printf("%d %d", e, f);
    return 0;
}