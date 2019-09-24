#include<iostream>
#include<cstdio>
#include<cstring>
#include <algorithm>
using namespace std;

char list[30][20]={"zero","one","two","three","four","five","six","seven","eight","nine","ten",
	"eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen","twenty",
	"a","both","another","first","second","third"};
int list2[30] = {0,1,4,9,16,25,36,49,64,81,0,21,44,69,96,25,56,89,24,61,0,1,4,1,1,4,9};
char ans[100] = "0";
int a[6];

int main(){
	char temp[20];
	int l = 0;
	for(int i=0;i<6;i++){
		cin >> temp;
		for(int j=0;j<=26;j++){
			if(strcmp(temp,list[j])==0){
				a[l++] = list2[j]; 
				break;
			}
		}
	}
	cin >> temp;
	sort(a,a+l);
	
	int first = 0;
	for(int i=0;i<l;i++){
		if(first){
			printf("%.02d",a[i]);
		} else {
			if(a[i]!=0){
				printf("%d",a[i]);
				first = 1;
			}
		}
	}
	if(first==0){
		printf("0");
	}
	return 0;
} 
