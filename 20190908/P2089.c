#include<stdio.h>

int n;
int count;
int a[10];
int r[10000][10];

void func(int cur){
	int i,j;
	if(cur==10){
		int sum=0;
		for(i=0;i<10;i++){
			sum+=a[i];
		}
		if(sum==n){
			for(j=0;j<10;j++){
				r[count][j]=a[j];
			}
			count++;	
		}
		return;
	} 
	for(i=1;i<=3;i++){
		a[cur]=i;
		func(cur+1);
	}
}

int main(){
	int i,j;
	scanf("%d",&n);
	if(n>30||n<10){
		printf("0");
	} else {
		func(0);
		printf("%d\n",count);
		for(i=0;i<count;i++){
			for(j=0;j<10;j++){
				printf("%d ",r[i][j]);
			}
			printf("\n");
		}
	}
}
