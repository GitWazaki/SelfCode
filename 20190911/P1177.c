#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 100001
int a[MAX];

void ksort(int l,int r){
    if(l>=r){
        return;
    }
    srand((int)time(0));
    int k=rand()%(r-l)+l;
    int x = a[k];
    a[k] = a[l];
    a[l] = x;
    int i = l, j = r;
    while(i<j){
        while(a[j]>=x&&i<j){
            j--;
        }
        while(a[i]<=x&&i<j){
            i++;
        }
        if(i<j){
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        } 
    }
    a[l] = a[j];
    a[j] = x;
    if(l<j) ksort(l,j-1);
    if(j<r) ksort(j+1,r);
}  

int main(){
    int n;
    int i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    ksort(0,n-1);
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}