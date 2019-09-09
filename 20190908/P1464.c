#include<stdio.h>

long long int result[30][30][30];

long long int w(long long int a,long long int b,long long int c){
	long long int temp;
	if(a<=0||b<=0||c<=0){
		temp =  1;
	} else if(result[a][b][c]!=0) {
		temp =  result[a][b][c]; 
	} else if(a>20||b>20||c>20) {
		temp =  w(20,20,20);
	} else if(a<b&&b<c) {
		temp = w(a,b,c-1)+w(a,b-1,c-1)-w(a,b-1,c);
	} else {
		temp = w(a-1,b,c)+w(a-1,b-1,c)+w(a-1,b,c-1)-w(a-1,b-1,c-1);
	}
	if(0<=a&&a<30&&0<=b&&b<30&&0<=c&&c<30){
		result[a][b][c] = temp;
	}
	return temp;
}

int main(){
	long long int a,b,c;
	long long int a1,b1,c1;
	while(1){
		scanf("%lld %lld %lld",&a,&b,&c);
		if(a==-1&&b==-1&&c==-1){
			break;
		}
		a1 = (a>20)? 21 : a;
		b1 = (b>20)? 21 : b;
		c1 = (c>20)? 21 : c;
		printf("w(%lld, %lld, %lld) = %lld\n",a,b,c,w(a1,b1,c1));
	}
	return 0; 
}
