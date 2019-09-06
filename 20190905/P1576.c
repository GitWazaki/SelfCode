#include<stdio.h>

int main(){
    int n;
    int array[10000];
    int i,j;
    int count = 0;
    int max = 0;
    scanf("%d",&n);
    scanf("%d",&array[0]);
    for(i = 1; i < n; i++){
        scanf("%d",&array[i]);
        if(array[i]>array[i-1]){
            count++;
        } else {
            if(count  >max){
                max = count;
            }
            count = 0;
        }
    }
    printf("%d",max+1);
    return 0;
}