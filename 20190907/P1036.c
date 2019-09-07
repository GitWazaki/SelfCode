#include<stdio.h>
#define N 10000000000
int bool[N+1];
int n,k;
int a[20],b[20],flag[20];
int count;

void set(int range){
	bool[0]=1;
	bool[1]=1;
	int i,j;
	for(i=2;i<=range;i++){
		if(bool[i]==0){
			for(j=2*i;j<=range;j+=i){
				bool[j]=1;
			}
		}
	}
}

void dfs(int cur,int pos){
	int i,j;
	if(cur==k){
		int sum = 0;
		for(i=0;i<k;i++){
			sum+=a[b[i]];
		}
		if(bool[sum]==0){
			count++;
		}
		return;
	} 
	for(i=pos;i<n;i++){
		if(flag[i]==0){
			b[cur] =i;
			flag[i]=1;
			dfs(cur+1,i);
			flag[i]=0;
		}
	}
}

int main(){
	int i;
	int range;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		range+=a[i];
	}
	set(range);
	dfs(0,0);
	
	printf("%d",count);
	return 0;
	
}
