#include<iostream>
using namespace std;
bool t1[26],t2[26];
char a[26];
int count;

int main(){
	string x,y,z;
	cin >> x >> y >>z;
	int end = x.size();
	for(int i=0;i<end;i++){
		if(!t1[x[i]-'A']&&!t2[y[i]-'A']){
			t1[x[i]-'A']=t2[y[i]-'A']=true;
			a[x[i]-'A'] = y[i];
			count ++;
		} else {
			if(y[i]!=a[x[i]-'A']){
				cout << "Failed";
				return 0;
			}	
		}
	}
	if(count<26){
		cout << "Failed";
		return 0;
	}
	for(int i=0;i<z.size();i++){
		cout << a[z[i]-'A'];
	}
	return 0;
}
