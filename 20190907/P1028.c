#include<stdio.h>
int n;

int a[1001];

void func(int m){
	int i;
	int sum = 0;
	int h = m/2;
	for(i=1;i<=h;i++){
		if(a[i]==0){
			func(i);
		}
		sum+=a[i];
	}
	a[m] = sum+1;
	//printf("%d:%d\n",m,a[m]);
}

int main(){
	scanf("%d",&n);
	a[0]=1;
	a[1]=1;
	func(n);
	printf("%d",a[n]);
	return 0;
}


