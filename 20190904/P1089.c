#include<stdio.h>

int main(){
    int judge = 0;
    int i;
    int remain = 0;
    int budget;
    int firstMonth = 0;
    int save = 0;
    for(i = 1; i <= 12; i++){
        scanf("%d",&budget);
        if(firstMonth == 0){
            int temp = remain + 300 - budget;
            if(temp < 0){
                firstMonth = i;
            } else {
                save += temp / 100;
                remain = temp % 100;
            }
        }
    }

    if(firstMonth != 0){
        printf("-%d", firstMonth);
    } else {
        printf("%d",save * 120 + remain);
    }

    return 0;
}