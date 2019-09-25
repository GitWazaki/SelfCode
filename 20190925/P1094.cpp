#include<iostream>
#include <algorithm>
using namespace std;

int a[30010];

bool cmp(int a,int b){
	return a>b;
}

int main(){
	int n,w;
	cin >> w >> n;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	sort(a,a+n,cmp);
	int count = 0;
	for(int i=0,j=n-1;i<=j;i++){
		if(a[i]+a[j]<=w){
			j--;
		} 
		count++;
	}
	cout << count;
	return 0;
}
