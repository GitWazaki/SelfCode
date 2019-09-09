#include<stdio.h>
#define MAX 20000 
int prime[MAX+1];
int a[MAX];

void color(){
	int i;
	for(i=0;i<=MAX;i++){
		prime[i]=1;
	}	
}

int set(){
	int i,j=0;
	prime[0]=0;
	prime[1]=0;
	for(i=2;i<MAX;i++){
		for(j=2*i;j<MAX;j+=i){
			prime[j]=0;
		}
	}
	for(i=2,j=0;i<MAX;i++){
		if(prime[i]==1){
			a[j++]=i;
		}
	}
	return j;
}

int main(){
	int n;
	int i,j,k,l;
	scanf("%d",&n);
	color();
	int count = set();
	for(j=0;j<n;j++){
		for(k=0;k<n;k++){
			int temp = n-a[j]-a[k];
			if(temp<=0){
				break;
			}
			if(prime[temp]==1){
				printf("%d %d %d",a[j],a[k],n-a[j]-a[k]);
				return 0;
			}
		}
	}
	return 0;
}
