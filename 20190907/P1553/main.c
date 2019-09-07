#include <stdio.h>
#include <string.h>

void fun1(char a[]){
    int i,j=1;
    int zero=1;
    char temp[1000] = "0";
    for(i = strlen(a)-1; i >=0; i--){
        if(zero&&a[i]!='0'){
            zero=0;
            j=0;
        }
        if(!zero){
            temp[j++]=a[i];
        }
    }

    temp[j] = '\0';

    strcpy(a, temp);
}

void fun2(char a[]) {
    int i,j=1;
    int zero=1;
    char temp[1000] = "0";
    for(i = 0; i < strlen(a); i++){
        if(zero&&a[i]!='0'){
            zero=0;
            j=strlen(a)-i-1;
        }
        if(!zero){
            temp[j--]=a[i];
        }
    }
    temp[j]='\0';
    strcpy(a, temp);
}

int main() {
    char a[1000];
    char b[1000],c[1000];
    char op = '\0';
    int i=0,j=0;
    scanf("%s",a);
    for(i = 0; i < strlen(a); i++){
        if('0'<=a[i]&&a[i]<='9'){
            b[i] = a[i];
        } else {
            op = a[i];
            break;
        }
    }
    b[i]='\0';
    for(++i;i<strlen(a);i++){
        if('0'<=a[i]&&a[i]<='9'){
            c[j++] = a[i];
        }
    }
    c[j]='\0';

    switch (op){
        case '\0':
            fun1(b);
            printf("%s",b);
            break;
        case '.':
            fun1(b);
            fun2(c);
            printf("%s.%s",b,c);
            break;
        case '/':
            fun1(b);
            fun1(c);
            printf("%s/%s",b,c);
            break;
        case '%':
            fun1(b);
            printf("%s%%",b);
    }

    return 0;

}