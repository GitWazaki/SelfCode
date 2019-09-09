#include<stdio.h>

int main(){
    long long int b,p,k;
    long long int result = 1;
    scanf("%lld %lld %lld",&b,&p,&k);
    long long int base = b, pow = p;
    while(pow>0){
        if(pow&1){
            result *= base;
            result %= k;
        }
        base *= base;
        base %= k;
        pow >>= 1;
    }
    if(p==0){
        result = 1 % k;
    }
   printf("%lld^%lld mod %lld=%lld",b,p,k,result);
}