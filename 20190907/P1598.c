#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	char a[102];
	int s[26]={0};
	int loop=4;
	int i;
	
	while(loop--){
		gets(a);
		for(i=0;i<strlen(a);i++){
			if(isalpha(a[i])){
				s[a[i]-'A']++;
			}
		}
	}
	int max=0;
	for(i=0;i<26;i++){
		if(s[i]>max){
			max=s[i];
		}
	}
	while(max--){
		int first = -1;
		for(i=0;i<26;i++){
			if(s[i]>max){
				int j;
				int end = (first==-1)? 2*i : 2*(i-first)-1;
				for(j=0;j<end;j++){
					printf(" ");
				}
				printf("*");
				first=i;
			}
		}
		printf("\n");
	}
	printf("A");
	for(i=1;i<26;i++){
		printf(" %c",'A'+i);
	}
	return 0;
}
