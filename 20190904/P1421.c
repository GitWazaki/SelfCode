#include<stdio.h>

int main(){
    int a, b, r;
    double c;
    scanf("%d %d",&a, &b);
    c = a + b / 10.0;
    r = (int) (c / 1.9);
    printf("%d",r);
    return 0;
}