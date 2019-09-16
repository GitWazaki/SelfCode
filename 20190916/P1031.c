#include<stdio.h>

int main(){
	int n;
	int a[101];
	int i,j;
	int sum=0;
	int count = 0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf(" %d",&a[i]);
		sum+=a[i];
	}
	int average = sum/n;
	for(i=0;i<n;i++){
		if(a[i]!=average){
			a[i+1] += (a[i]-average);
			a[i] = average;
			count++; 
		} 
	}
	printf("%d",count);
	return 0;
}
