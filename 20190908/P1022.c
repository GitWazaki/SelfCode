#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAX 1000000
char s[MAX];

int main(){
	int i;
	double k=0,b=0;
	char x='\0';
	int op = 1;
	int e = 1;
	int temp = 0;
	int flag = 0;
	int lastIsD = 0;
	scanf("%s",s);
	for(i=0;i<=strlen(s);i++){
		char c = s[i];
		if(isdigit(c)){
			temp = temp*10 + c-'0';
			if(!flag){
				flag = 1;
			}
			lastIsD=1;
		} else if(isalpha(c)){
			if(x=='\0'){
				x = c;
			}
			if(flag){
				k += op*temp*e;
			} else {
				k += op*e;
			}
			flag = 0;
			op = 1;
			temp = 0;
			lastIsD=0;
		} else if(c=='+'){
			if(lastIsD){
				if(flag){
				b += op*temp*e;
				} else {
					b += op*e;
				}
				flag = 0;
				op = 1;
				temp = 0;
			}
			lastIsD=0;
		} else if(c=='-'){
			if(lastIsD){
				if(flag){
				b += op*temp*e;
				} else {
					b += op*e;
				}
				flag = 0;
				op = 1;
				temp = 0;
			}
			op *= -1;
			lastIsD=0;
		} else if(c=='='){
			if(lastIsD){
				if(flag){
					b += op*temp*e;
				} else {
					b += op*e;
				}
				flag = 0;
				op = 1;
				temp = 0;
			}
			lastIsD=0;
			e = -1;
		} else {
			if(lastIsD){
				if(flag){
					b += op*temp*e;
				} else {
					b += op*e;
				}
				flag = 0;
				op = 1;
				temp = 0;
			}
		}
	}
	printf("%c=%.3lf",x,-b/k);
	return 0;
}
