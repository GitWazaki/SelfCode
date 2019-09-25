#include<iostream>
#include <algorithm>
#define N 1000010
using namespace std;

struct time{
	int start;
	int end;
} y[N];

bool cmp(struct time a,struct time b){
	return a.end < b.end;
}

int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> y[i].start >> y[i].end;
	}
	sort(y,y+n,cmp);
	int count = 1;
	int i=0,j=0;
	while(1){
		for(j=i;j<n;j++){
			if(y[j].start>=y[i].end){
				count++;
				i=j;
				break;
			}
		}
		if(i!=j) break;
	}
	cout << count;
	return 0;
}
