#include<stdio.h>
#define MAX 1000002
char b[MAX][12];
int a[MAX];

int dir(int i, int t){
	int temp = a[i];
	if(temp==0){
		if(t) return 1;
		else return -1;
	} else {
		if(t) return -1;
		else return 1;
	}
}

int main(){
	int n,m;
	int i,j;
	int t,s;
	int cur = 0;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++){
		scanf(" %d %s",&a[i],b[i]);
	}

	for(i=0;i<m;i++){
		scanf(" %d %d",&t,&s);
		int d = dir(cur,t);
		if(d>0){
			cur+=s;
		}else {
			cur-=s;
		}
		if(cur>=n){
			cur-=n;
		} else if(cur<0){
			cur+=n;
		}
	}
	printf("%s",b[cur]);
	return 0;
}
