#include<stdio.h>
int a[220],b[220];
int counta,countb;

int cmp(int a,int b){
	if(a==b){
		return 0;
	}
	if(a==0){
		if(b==1) return -1;
		else if(b==2) return 1;
		else if(b==3) return 1;
		else if(b==4) return -1;
	} else if(a==1){
		if(b==0) return 1;
		else if(b==2) return -1;
		else if(b==3) return 1;
		else if(b==4) return -1;
	} else if(a==2){
		if(b==0) return -1;
		else if(b==1) return 1;
		else if(b==3) return -1;
		else if(b==4) return 1;
	}else if(a==3){
		if(b==0) return -1;
		else if(b==1) return -1;
		else if(b==2) return 1;
		else if(b==4) return 1;
	}else if(a==4){
		if(b==0) return 1;
		else if(b==1) return 1;
		else if(b==2) return -1;
		else if(b==3) return -1;
	}
}

int main(){
	int n,na,nb;
	scanf("%d %d %d",&n,&na,&nb);
	int i,j,k;
	for(i=0;i<na;i++){
		scanf(" %d",&a[i]);
	}
	for(i=0;i<nb;i++){
		scanf(" %d",&b[i]);
	}
	for(k=0,i=0,j=0;k<n;k++){
		int judge = cmp(a[i],b[j]);
		if(judge>0){
			counta++;
		} else if(judge<0) {
			countb++;
		}
		i=(i+1)%na;
		j=(j+1)%nb;
	}
	printf("%d %d",counta,countb);
	return 0;
} 
