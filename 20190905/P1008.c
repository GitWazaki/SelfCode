#include<stdio.h>

void clear(int a[]){
    int i;
    for(i=0; i<10;i++){
        a[i] = 0;
    }
    return;
}

int main(){
    int loop;
    int a[10];
    clear(a);
    for(loop=123;loop<333;loop++){
        a[loop%10] = 1;
        a[(loop/10)%10] = 1;
        a[loop/100] = 1;
        int b = loop%10;
        int c = (loop/10)%10;
        int d = loop/100;
        if(!(loop%10 && (loop/10)%10 && loop/100 && loop%10!=(loop/10)%10 && loop%10!=loop/100 && (loop/10)%10!=loop/100)){
            clear(a);
            continue;
        }
        int temp = loop * 2;
        if(temp%10 && (temp/10)%10 && temp/100 && a[temp%10] == 0 && a[(temp/10)%10] == 0 && a[temp/100] == 0){
            a[temp%10] = 1;
            a[(temp/10)%10] = 1;
            a[temp/100] = 1;
        } else {
            clear(a);
            continue;
        }
        int temp2 = loop * 3;
        if(temp2%10 && (temp2/10)%10 && temp2/100 &&a[temp2%10] == 0 && a[(temp2/10)%10] == 0 && a[temp2/100] == 0){
            printf("%d %d %d\n",loop,temp,temp2);
        } else {
            clear(a);
            continue;
        }
    }
}
