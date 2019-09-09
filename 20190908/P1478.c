#include<stdio.h>

int main(){
	int n,s,a,b;
	int arr[5000];
	int h,m;
	int i,j=0,k;
	int count=0;
	scanf("%d %d",&n,&s);
	scanf("%d %d",&a,&b);
	for(i=0;i<n;i++){
		scanf("%d %d",&h,&m);
		if(h<=a+b){
			arr[j++]=m;
		}
	}
	int min;
	int local;
	for(i=0;i<j;i++){
		min=arr[i];
		local=i;
		for(k=i+1;k<j;k++){
			if(arr[k]<min){
				min=arr[k];
				local=k;
			}
		}
		if(local!=i){
			int temp = arr[i];
			arr[i]=min;
			arr[local]=temp;
		}
	}
	for(i=0;i<j;i++){
		if(s<=0){
			break;
		}
		if(arr[i]<=s){
			s-=arr[i];
			count++;
		} else {
			break;
		}
	}
	printf("%d",count);
	return 0;
}
