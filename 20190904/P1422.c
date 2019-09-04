#include<stdio.h>

int main(){
    int a;
    double sum = 0;
    scanf("%d",&a);
    if(a <= 150){
        sum = 0.4463 * a;
    } else if(150 < a && a <= 400){
        sum = 150 * 0.4463 + (a - 150) * 0.4663;
    } else {
        sum = 150 * 0.4463 + 250 * 0.4663 + (a - 400) * 0.5663;
    }
    printf("%.1lf",sum);
    return 0;
}