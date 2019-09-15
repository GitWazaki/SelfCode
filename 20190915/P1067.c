#include<stdio.h>

int main(){
    int n;
    int a;
    int i;
    int first = 1;
    scanf("%d",&n);
    for(i=n;i>=0;i--){
        scanf("%d",&a);
        if(a!=0){
            if(a!=1&&a!=-1||i==0){
                if(a>0&&!first){
                    printf("+");
                }
                printf("%d",a);
            } else {
                if(a==1&&!first){
                    printf("+");
                }
                if(a==-1){
                    printf("-");
                }
            }
            if(i==1){
                printf("x");
            }else if(i!=0){
                printf("x^%d",i);
            }
            first = 0;
        }
    }
}