#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char word[12];
    char temp[500];
    char pg[2000000];
    int i=0,j=0,k=0;
    int num = 0,first=-1, count=0;
    scanf("%s ",word);
    gets(pg);
    int l = strlen(pg);
    pg[l]=' ';
    pg[l+1]='\0';
    for(i=0;i<strlen(pg);i++){
        if(isalpha(pg[i])){
            temp[j++]=pg[i];
        } else {
            temp[j]='\0';
            j=0;
            num++;
            if(strlen(word)==strlen(temp)){
                for(k=0;k<strlen(word);k++){
                    if(word[k]!=temp[k] && word[k]!=temp[k]+32 && word[k]!=temp[k]-32){
                        break;
                    }
                }
                if(k==strlen(word)){
                    count++;
                    if(first==-1){
                        first = i-strlen(word);
                    }
                }
            }
        }
    }
    
    if(first==-1){
        printf("-1");
    } else{
        printf("%d %d",count,first);
    }
    return 0;
    
}