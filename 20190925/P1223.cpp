#include<iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

struct person{
	int time;
	int id;
} a[1010];

bool cmp(struct person a,struct person b){
	if(a.time == b.time){
		return a.id < b.id;
	}
	return a.time < b.time;
}

int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a[i].time;
		a[i].id = i+1;	
	} 
	sort(a,a+n,cmp);
	long long sum = 0;
	long long l = 0;
	for(int i=0;i<n;i++){
		sum += l;
		l += a[i].time;
		cout << a[i].id << ' ';
	}
	cout << endl;
	cout.setf(ios::fixed);
	cout << fixed << setprecision(2) << double (sum)/n;
	return 0;
}
