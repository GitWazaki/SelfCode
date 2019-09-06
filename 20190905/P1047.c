#include<stdio.h>

int main(){
    int l;
    int m;
    int array[10000] = {0};
    int begin,end;
    int count = 0;
    scanf("%d %d",&l,&m);
    int i = l;
    while(i>=0){
        array[i--] = 1;
    }
    while(m--){
        scanf("%d %d",&begin,&end);
        if(begin>end){
            int temp = begin;
            begin = end;
            end = temp;
        }
        for(i = begin; i <= end; i++){
            array[i] = 0;
        }
    }
    i = 0;
    while(i<=l){
        if(array[i]==1){
            count++;
        }
        i++;
    }
    printf("%d",count);
    return 0;
}