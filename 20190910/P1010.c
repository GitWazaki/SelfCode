#include<stdio.h>

void func(int n){
    int temp = n;
    int first = 1;
    int i = 15;
    int loop = 0x8000;
    if(temp==1){
        return;
    }
    if(temp==0){
        printf("0");
        return;
    }
    while(loop>0){
        if(loop&temp){
            if(!first){
                printf("+");
            }
            printf("2");
            if(loop!=2){
                printf("(");
            }
            func(i);
            if(loop!=2){
                printf(")");
            }
            if(first){
                first = 0;
            }
        }
        loop >>= 1;
        i--;
    }


    
}

int main(){
    int num;
    scanf("%d",&num);
    func(num);
    return 0;
}