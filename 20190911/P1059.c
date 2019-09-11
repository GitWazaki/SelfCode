#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 100001
int a[MAX];
int flag[1000];

void ksort(int l,int r){
    if(l>=r){
        return;
    }
    int k = (l+r)/2;
    int x = a[k];
    a[k] = a[l];
    a[l] = x;
    int i = l, j = r;
    while(1){
        while(a[j]>=x&&j>l){
            j--;
        }
        while(a[i]<=x&&i<=r){
            i++;
        }
        if(i<j){
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        } else {
            break;
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
    int count = 0;
    int temp;
    scanf("%d",&n);
    //srand((unsigned)time(0));
    for(i=0;i<n;i++){
        /*int r = rand()%1000+1;
        if(!flag[r]){
            a[i] = r;
            flag[a[i]] = 1;
        }*/
        scanf("%d",&temp);
        if(!flag[temp]){
            a[count] = temp;
            flag[a[count]] = 1;
            count++;
        }
    }
    ksort(0,count-1);
    printf("%d\n",count);
    for(i=0;i<count;i++){
        printf("%d ",a[i]);
    }
    return 0;
}