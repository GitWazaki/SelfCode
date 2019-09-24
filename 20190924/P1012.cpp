#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
string list[30];

bool cmp(string a,string b){
	int i;
	for(i=0;i<a.size()&&i<b.size();i++){
		if(a[i]!=b[i]){
			return a[i]>b[i];
		}
	}
	if(a.size()==b.size()){
		return 0;
	}
	if(i==a.size()){
		return a[0] > b[i];
	} else{
		return a[i] > b[0];
	}
} 

int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> list[i];
	}
	sort(list,list+n,cmp);
	for(int i=0;i<n;i++){
		cout << list[i];
	}
	return 0;
}

