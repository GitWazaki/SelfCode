#include<stdio.h>

int main(){
	int n;
	int a;
	scanf("%d",&n);
	for(a=1;a<5000;a++){
		if(a*(a+1)/2>=n){
			break;
		}
	}
	int d = a*(a+1)/2-n;
	if(a%2==0){
		printf("%d/%d",a-d,d+1);
	} else {
		printf("%d/%d",d+1,a-d);
	}
	
	return 0;
}
