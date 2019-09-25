#include<iostream>
using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	int count1=0;
	int temp;
	long long sum=0;
	int a[100010];
	for(int i=0;i<n;i++){
		cin >> temp;
		a[i]=temp;
		if(sum+temp<=m){
			sum+=temp;	
		} else{
			count1++;
			sum=temp;
		}
	}
	count1++;
	cout << count1;
	return 0;
}
