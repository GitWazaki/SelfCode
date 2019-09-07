#include<stdio.h>
#include<math.h>
#define N 10000000
int prime[N+1];
int v[N+1];
int flag[100000001];
int m;
//int count;

void set(int max){	
	int i,j;
	for(i=2;i<=max;i++){
		if(v[i]==0){
			v[i]=i;
			prime[m++]=i;
			flag[i]=1;
		}
		for(j=1;j<=m;j++){
			if(prime[j]>v[i] || prime[j]*i>max){
				break;
			}
			 v[i*prime[j]] = prime[j];
		}
	}
}

int main(){
	int a,b;
	int i,j,k,l,h;
	scanf("%d %d",&a,&b);
	if(b>10000000) b=10000000;
	set(b);
	for(i=5;i<=b;i+=2){
		if(i<a){
			continue;
		}
		int temp=i;
		int d=0;
		while(temp>0){
			d=d*10+temp%10;
			temp/=10;
		}
		if(d==i&&flag[i]==1){
			printf("%d\n",i);
			//count++;
		}
	}
	//printf("%d",count);
	return 0;
}

