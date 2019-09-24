#include<iostream>
#include<algorithm> 
#define N 102 
using namespace std;
int total;

struct student{
	string name;
	int qimo;
	int banji;
	bool ganbu;
	bool xi;
	int paper;
	int money;
}s[N];



int main(){
	
	int n;
	int id=0;
	int max=0;
	int sum=0;
	cin >> n;
	for(int i=0;i<n;i++){
		sum = 0;
		char t1,t2;
		cin >> s[i].name >> s[i].qimo >> s[i].banji >> t1 >> t2 >> s[i].paper;
		s[i].ganbu = (t1=='Y');
		s[i].xi = (t2=='Y');
		if(s[i].qimo>80&&s[i].paper>0){
			sum+=8000;
		}
		if(s[i].qimo>85&&s[i].banji>80){
			sum+=4000;
		}
		if(s[i].qimo>90){
			sum+=2000;
		}
		if(s[i].xi&&s[i].qimo>85){
			sum+=1000;
		}
		if(s[i].ganbu&&s[i].banji>80){
			sum+=850;
		}
		if(sum>max){
			max=sum;
			id = i;
		}
		total+=sum;
	}
	cout << s[id].name << endl;
	cout << max << endl;
	cout << total;
	return 0;
}
