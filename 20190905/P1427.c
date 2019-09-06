#include<stdio.h>

int main(){
    int array[100];
    int a = -1;
    int i;
    while(1){
        scanf("%d",&a);
        if(a==0){
            break;
        }
        array[i++] = a;
    }
    while(i>0){
        printf("%d ",array[--i]);
    }
    return 0;
}