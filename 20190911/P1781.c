#include<stdio.h>
#include<string.h>

int cmp(char a[],char b[]){
	int i = strlen(a), j = strlen(b);
	if(i==j){
		return strcmp(a,b);
	} else {
		return i-j;
	}
}

int main(){
	int n;
	int i;
	int max;
	char s[1000]="\0",temp[1000]; 
	scanf("%d",&n);
	for(i=1,max=0;i<=n;i++){
		scanf("%s",temp);
		if(cmp(temp,s)>0){
			max = i;
			strcpy(s,temp);
		}
	}
	printf("%d\n%s",max,s);
	return 0;
}
