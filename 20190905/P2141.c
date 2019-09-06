#include<stdio.h>

int main(){
    int n;
    int i = 0, j = 0;;
    int array[100];
    int check[100001] = {0};
    int a;
    int count = 0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a);
        array[i] = a;
        for(j = 0; j < i ; j++){
           check[a+array[j]]++;
        }
    }
    for(i=0;i<n;i++){
        count += check[array[i]]? 1 : 0;
    }
    printf("%d",count);
    return 0;
}