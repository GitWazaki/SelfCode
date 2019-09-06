#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char star[10],group[10];
    int i,j;
    int sum1=1,sum2=1;
    scanf("%s %s",star,group);
    for(i=0;i<strlen(star);i++){
        sum1*=(star[i]-'A'+1);
    }
    for(j=0;j<strlen(group);j++){
        sum2*=(group[j]-'A'+1);
    }
    if(sum1%47==sum2%47){
        printf("GO");
    }else{
        printf("STAY");
    }
    return 0;
}