#include<stdio.h>
#define MAX 1002
int m,n,k,l,d;
int hang[MAX];
int lie[MAX];
int r1[MAX];
int r2[MAX];

int min(int a,int b){
	if(a<=b) return a;
	else return b;
}

int max_in_array(int a[],int n){
	int l=1,m=a[1];
	int i;
	for(i=2;i<=n;i++){
		if(a[i]>m){
			l=i;
			m=a[i];
		}
	}
	return l;
}

int main(){
	int i,j;
	int num;
	int x,y,p,q;
	scanf("%d %d %d %d %d",&m,&n,&k,&l,&d);
	for(i=0;i<d;i++){
		scanf(" %d %d %d %d",&x,&y,&p,&q);
		if(x==p){
			lie[min(y,q)]++;
		} else {
			hang[min(x,p)]++;
		} 
	}
	
	for(i=0;i<k;i++){ 
		int r = max_in_array(hang,m);
		r1[r]=1;
		hang[r] = 0;
	}
	for(i=0;i<l;i++){ 
		int r = max_in_array(lie,n);
		r2[r]=1;
		lie[r] = 0;
	}
	for(i=0,num=0;i<MAX;i++){
		if(num==k) break;
		if(r1[i]){
			printf("%d ",i);
			num++;
		}
	}
	printf("\n");
	for(i=0,num=0;i<MAX;i++){
		if(num==l) break;
		if(r2[i]){
			printf("%d ",i);
			num++;
		}
	}
}

