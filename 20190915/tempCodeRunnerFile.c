#include<stdio.h>
int mem[200];
int m,n;

void init(int n){
    int i;
    for(i=0;i<n;i++){
        mem[i]=-1;
    }
    return;
}

int check(int a){
    int i;
    for(i=0;i<n&&mem[i]!=-1;i++){
        if(mem[i]==a){
            return 0;
        }
    }
    return -1;
}

int main(){
    int a;
    int i,j;
    int local = 0;
    int count = 0;
    scanf("%d %d",&m,&n);
    init(m);
    for(i=0,j=0;j<m; i++){
        scanf(" %d",&a);
        if(check(a)!=0){
            mem[j++]=a;
            count++;
        }
    }
    for(;i<n;i++){
        scanf(" %d",&a);
        if(check(a)!=0){
            mem[local] = a;
            local=(local+1)%m;
            count++;
        }
        
    }
    printf("%d",count);
    
    return 0;
}