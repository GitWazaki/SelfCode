#include<stdio.h>
#define MAX 65000
char a[MAX];

int main(){
	char c;
	int i = 0;
	int w=0,l=0;
	while(1){
		c = getchar();
		if(c=='E'){
			break;
		}
		if(c=='W'||c=='L'){
			a[i++]=c;	
		}
	}
	int len = i;
	for(i=0,w=0,l=0;i<len;i++){
		if(a[i]=='W'){
			w++;
		} else {
			l++;
		}
		if(w>=11||l>=11){
			if(w-l>=2||l-w>=2){
				printf("%d:%d\n",w,l);
				w = 0;
				l = 0;
			}
		}
	}
		printf("%d:%d\n",w,l);
		w = 0;
		l = 0;
	printf("\n");
	for(i=0,w=0,l=0;i<len;i++){
		if(a[i]=='W'){
			w++;
		} else  {
			l++;
		}
		if(w>=21||l>=21){
			if(w-l>=2||l-w>=2){
				printf("%d:%d\n",w,l);
				w = 0;
				l = 0;
			}
		}
	}
	printf("%d:%d\n",w,l);
	return 0;
} 
