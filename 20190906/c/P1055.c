#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char a[20],b[20];
    scanf("%s",a);
    int i,j = 1;
    int l = strlen(a);
    int sum = 0;
    for(i=0;i<l-1;i++){
        b[i] = a[i];
        if(isdigit(a[i])){
            sum += (a[i]-'0')*j++;
        }
    }
    if(sum%11==10){
        b[l-1]='X';
    } else{
        b[l-1]=sum%11+'0';
    }
    b[l]='\0';
    if(a[l-1]==b[l-1]){
        printf("Right");
    }else{
        printf("%s",b);
    }
    return 0;
}