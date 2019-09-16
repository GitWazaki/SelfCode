#include<stdio.h>
#include<ctype.h>
char str[8000];
char ans[8000];
int main(){
	int p1,p2,p3;
	int i=0,j=0,k=0,l=0;
	scanf("%d %d %d ",&p1,&p2,&p3);
	scanf("%s",str);
	while(1){
		char c=str[i];
		if(c=='\0'){
			break;
		}
		if(c=='-'){
			if(!(islower(str[i-1])&&islower(str[i+1])||isdigit(str[i-1])&&isdigit(str[i+1]))){
				ans[j++]=str[i++];
				continue;
			}
			if(str[i-1]<str[i+1]){
				int d = str[i+1]-str[i-1];
				if(p3==1){
					if(p1==3) {
						for(k=1;k<d;k++){
							for(l=0;l<p2;l++){
								ans[j++]='*';
							}
						}
					}else if(p1==1||isdigit(str[i-1])){
						char temp = str[i-1];
						for(k=1;k<d;k++){
							for(l=0;l<p2;l++){
								ans[j++]=temp+k;
							}
						}
					} else if(p1==2){
						char temp = str[i-1]-32;
						for(k=1;k<d;k++){
							for(l=0;l<p2;l++){
								ans[j++]=temp+k;
							}
						}
					} 
				} else if(p3==2){
					if(p1==3) {
						for(k=d-1;k>0;k--){
							for(l=0;l<p2;l++){
								ans[j++]='*';
							}
						}
					} else if(p1==1||isdigit(str[i-1])){
						char temp = str[i-1];
						for(k=d-1;k>0;k--){
							for(l=0;l<p2;l++){
								ans[j++]=temp+k;
							}
						}
					} else if(p1==2){
						char temp = str[i-1]-32;
						for(k=d-1;k>0;k--){
							for(l=0;l<p2;l++){
								ans[j++]=temp+k;
							}
						}
					} 
				} 
				i++;
			} else {
				ans[j++]=str[i++]; 
			} 
			
		} else {
			ans[j++]=str[i++];
		}
	}
	ans[j]='\0';
	printf("%s",ans);
	return 0;
}
