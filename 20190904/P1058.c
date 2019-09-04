#include<stdio.h>

int main(){
    int a, b, i;
    int max = 0;
    for(i = 1; i <= 7; i++){
        scanf("%d %d", &a, &b);
        if(a + b > 8 && max == 0){
            max = i;
        }
    }
    printf("%d",max);
    return 0;
}