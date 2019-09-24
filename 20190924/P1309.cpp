#include<iostream>
#include<algorithm>
#define N 200020
using namespace std;
int n,r,q;
struct player{
	int id;
	int s;
	int w;
}p[N];

struct player win[N],lose[N];

bool cmp(struct player a, struct player b){
	if(a.s==b.s){
		return a.id<b.id;
	} else {
		return a.s > b.s;
	}
}

void merge(int num){
	int i=0,j=0;
	int l = 0;
	while(i<num&&j<num){
		if(cmp(win[i],lose[j])){
			p[l++]=win[i++];
		} else {
			p[l++]=lose[j++];
		}
	}
	while(i<num){
		p[l++]=win[i++];
	}
	while(j<num){
		p[l++]=lose[j++];
	}
	return;
}

int main(){
	cin >> n >> r >> q;
	int end = 2 * n;
	for(int i = 0; i < end; i++){
		p[i].id = i+1;
		cin >> p[i].s;
	}
	for(int i = 0; i < end; i++){
		cin >> p[i].w;
	}
	sort(p,p+end,cmp);
	for(int i=0; i < r; i++){
		int num = 0;
		for(int j=0; j<end; j+=2){
			if(p[j].w > p[j+1].w){
				p[j].s++;
				win[num]=p[j];
				lose[num]=p[j+1];
				num++;
			} else {
				p[j+1].s++;
				win[num]=p[j+1];
				lose[num]=p[j];
				num++;
			}
		}
		merge(num);
	}
	cout << p[q-1].id;
	return 0;
}
