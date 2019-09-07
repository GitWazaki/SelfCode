#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	char s[60];
	char result[60];
	int n;
	int i;
	scanf("%d",&n);
	scanf("%s",s);
	for(i=0;i<strlen(s);i++){
		result[i] = (s[i]-'a' + n) % 26 + 'a';
	}
	result[i]='\0';
	printf("%s",result);
	return 0;
}
