#include<iostream>
#include<algorithm> 
#define N 310
using namespace std;

struct student{
	int id;
	int sum;
	int chinese;
}s[N];

bool cmp(struct student a,struct student b){
	if(a.sum==b.sum){
		if(a.chinese==b.chinese){
			return a.id < b.id;
		} else{
			return a.chinese > b.chinese;
		}
	} else{
		return a.sum > b.sum;
	} 
}

int main(){
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++){
		int ch, math, eng;
		s[i].id = i;
		cin >> ch >> math >> eng;
		s[i].chinese = ch;
		s[i].sum = ch+math+eng;
	}
	sort(s+1,s+n+1,cmp);
	for(int i = 1; i <= 5; i++){
		cout << s[i].id << ' ' << s[i].sum << endl;
	}
	return 0;
}
