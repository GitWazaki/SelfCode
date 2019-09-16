#include<stdio.h>
#include<math.h>
int m,n,k;

struct huasheng{
	int num;
	int x;
	int y;
}a[500];

void sort(int n){
	int min;
	int k;
	int i,j;
	for(i=0;i<n;i++){
		k=i;
		min = a[i].num;
		for(j=i+1;j<n;j++){
			if(a[j].num<min){
				min = a[j].num;
				k = j;
			}
		}
		if(k!=i){
			struct huasheng temp = a[i];
			a[i] = a[k];
			a[k] = temp;
		}
	}
}

int main(){
	int i,j,h=0;
	int temp;
	scanf("%d %d %d",&m,&n,&k);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf(" %d",&temp);
			if(temp!=0){
				a[h].num=temp;
				a[h].x=i;
				a[h].y=j;
				h++;
			}
		}
	}
	sort(h);
	int first = 1;
	int cur_x=-1,cur_y=-1;
	int step_go,step_out,step_get=1;
	int out=-1;
	int flag;
	int sum=0;
	for(i=h-1;i>=0&&k>0;i--){
		flag = 0;
		if(first){
			step_go = a[i].x+1;
			first=0;
		} else {
			step_go = abs(a[i].x-cur_x)+abs(a[i].y-cur_y);
		}
		step_out = a[i].x+1;
		if(step_go+step_get+step_out<=k){
			sum+=a[i].num;
			cur_x=a[i].x;
			cur_y=a[i].y;
			k-=(step_go+step_get);
			out = step_out;
			flag = 1;
		}
		if(!flag){
			k-=out;
			break;
		}
	}
	printf("%d",sum);
	return 0;
}
