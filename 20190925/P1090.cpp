#include<iostream>
#include <algorithm>
#define N 10010
using namespace std;

int a[N];

int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	sort(a,a+n);
	int last = a[0];
	int sum = 0; 
	for(int i=1;i<n;i++){
		last = (last + a[i]);
		sum += last;
	} 
	cout << sum;
	return 0;
}
