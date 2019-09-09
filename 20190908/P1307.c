#include<stdio.h>

int main(){
	int n;
	int flag;
	int first = 0;
	int result = 0;
	scanf("%d",&n);
	if(n<0){
		flag = 1;
		n=-n;
	}
	while(n>0){
		int a = n%10;
		if(first){
			result=result*10+a;
		} else {
			if(a!=0){
				result = a;
				first=1;
			}
		}
		n/=10;
	}
	if(flag){
		result=-result;
	}
	printf("%d",result);
	return 0;
}
