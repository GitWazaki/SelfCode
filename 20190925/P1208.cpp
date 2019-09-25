#include<iostream>
#include <algorithm>
#define N 2000010
using namespace std;

struct milk{
	int num;
	int price;
} mk[N];

bool cmp(struct milk a,struct milk b){
	if(a.price == b.price){
		return a.num > b.num;
	}
	return a.price < b.price;
}

int main(){
	int m,n;
	cin >> m >> n;
	for(int i=0;i<n;i++){
		cin >> mk[i].price >> mk[i].num;
	}
	sort(mk,mk+n,cmp);
	int num = 0;
	int i = 0;
	int s = 0;
	while(num<m){
		int temp = (mk[i].num < m-num)? mk[i].num : m-num;
		num+=temp;
		s += temp * mk[i].price;	
		i++;
	}
	cout << s;
	return 0;
}
