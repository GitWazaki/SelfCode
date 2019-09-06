#include <stdio.h>

int main(){
    int a[10];
    int i;
    int high;
    int count = 0;
    for(i = 0; i < 10; i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&high);
    for(i = 0; i < 10; i++){
        if(a[i]<=high+30){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}