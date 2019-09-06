#include<stdio.h>

int main(){
    int n;
    int array[100];
    int ans[100] = {0};
    int i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
        int count = 0;
        for(j=0;j<i;j++){
            if(array[j]<array[i]){
                count++;
            }
            ans[i] = count;
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",ans[i]);
    }
    return 0;
}