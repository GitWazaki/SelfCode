#include<iostream>
#include <algorithm>

using namespace std;

struct person{
	int w;
	int id;
}a[20020];

int e[11];

int cmp(struct person a,struct person b){
	if(a.w!=b.w){
		return a.w>b.w;
	} else {
		return a.id<b.id;
	}
}

int main(){
	int n,k;
	cin>>n>>k;
	for(int i=1;i<=10;i++){
		cin >> e[i];
	}
	for(int i=0;i<n;i++){
		cin >> a[i].w;
		a[i].id = i;
	}
	
	/*for(int i=0;i<n;i++){
		cout << a[i].w << ' ';
		cout << a[i].id+1 << endl;
	}*/ 
	
	sort(a,a+n,cmp);
	
	/*for(int i=0;i<n;i++){
		cout << a[i].w << ' ';
		cout << a[i].id+1 << endl;
	}*/ 
	
	for(int i=0;i<n;i++){
		int d = i%10+1;
		a[i].w+=e[d];
	}
	sort(a,a+n,cmp);
	
	/*for(int i=0;i<n;i++){
		cout << a[i].w << ' ';
		cout << a[i].id+1 << endl;
	}*/
	
	for(int i=0;i<k;i++){
		cout << a[i].id+1 << ' ';
	}
	return 0;
}


