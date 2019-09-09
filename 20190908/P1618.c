#include<stdio.h>

int flag[9];
int num[3];
int a,b,c;

void clean(){
	int i;
	for(i=0;i<9;i++){
		flag[i]=0;
	}
} 

int main(){
	int i,j;
	double k1,k2;
	int  n1,n2,n3;
	int count=0;
	scanf("%d %d %d",&a,&b,&c);
	k1 = ((double) b)/a;
	k2 = ((double) c)/a;
	for(i=123;i<987;i++){
		num[0]=i;
		num[1]=i * k1;
		num[2]=i * k2;
		if(num[2]>1000){
			break;
		}
		clean();
		for(j=0;j<3;j++){
			int temp = num[j];
			int n1 = temp/100;
			int n2 = temp/10%10;
			int n3 = temp%10;
			if(!n1||!n2||!n3||n1==n2||n1==n3||n2==n3){
				break;
			}
			if(flag[n1-1]==0&&flag[n2-1]==0&&flag[n3-1]==0){
				flag[n1-1]=1;
				flag[n2-1]=1;
				flag[n3-1]=1;
			} else {
				break;
			}
		}
		if(j==3){
			printf("%d %d %d\n",num[0],num[1],num[2]);
			count++;
		}
	}
	if(count==0){
		printf("No!!!");
	}
	return 0;
}
