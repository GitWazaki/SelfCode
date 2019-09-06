#include <stdio.h>

int main()
{
    int begin;
    int day;
    int distance = 0;
    scanf("%d %d",&begin,&day);
    int s = begin;
    while(day > 0){
        if(s != 0 && s != 6 && s!= 7){
            distance += 250;
        }
        s = (s+1)%7;
        day--;
    }
    printf("%d",distance);
    return 0;
}