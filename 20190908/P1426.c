#include<stdio.h>

int main(){
	int s,x;
	double p = 7;
	double sum = 0;
	
	scanf("%d %d",&s,&x);
	
	while(sum<s-x){
		sum+=p;
		p*=0.98;
	}
	if(sum+p>s+x){
		printf("n");
	} else {
		printf("y");
	}
	return 0;
}
