#include<stdio.h>
#include<string.h>
#include<ctype.h>

char p[10000000];
char word[12];
int num;
int first = -1; 

int main(){
	int i=0,j=0;
	char space[10] = " \0";
	char temp[50];
	scanf("%s",word);
	getchar();
	int l = strlen(word);
	for(i=0;i<l;i++){
		if(isupper(word[i])){
			word[i]=word[i]+32;
		}
	}
	gets(p);
	strcat(p,space);
	int end = strlen(p);
	int flag = -1;
	for(i=0;i<end;i++){
		if(isalpha(p[i])){
			if(isupper(p[i])){
				temp[j++] = p[i]+32;
			} else {
				temp[j++] = p[i];
			}
			if(flag==-1){
				flag=i;
			}
		} else {
			temp[j]='\0';
			j=0;
			if(strlen(temp)==l){
				int k;
				for(k=0;k<l;k++){
					if(word[k]!=temp[k]){
						break;
					}
				}
				if(k==l){
					num++;
					if(first==-1){
						first = flag;
					}
				}
			}
			flag = -1;
		}
	}
	if(first==-1){
		printf("-1");
	} else{
		printf("%d %d",num,first);
	}
	return 0;
}
