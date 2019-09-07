#include<stdio.h>
int n;
int a[1000] = {6,2,5,5,4,5,6,3,7,6};
int b[10];
int count;

void func(int cur){
	int i;
	for(i=0;i<1000;i++){
		if(n-a[i]>=0){
			b[cur]=i;
			n-=a[i];
			if(cur==3){
				if(n==0&&b[1]+b[2]==b[3]){
					count++;
					//printf("%d+%d=%d\n",b[1],b[2],b[3]);
				}
			} else{
				func(cur+1);
			}
			n+=a[i];
		}
	}
}

int main(){
	int i;
	for(i=10;i<1000;i++){
		a[i]=a[i/10]+a[i%10];
	}
	scanf("%d",&n);
	n-=4;
	func(1);
	printf("%d",count);
	return 0;
}
