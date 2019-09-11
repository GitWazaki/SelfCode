#include<stdio.h>

struct person {
    int num;
    int score;
} a[5001];

int cmp(struct person i,struct person j){
    if(i.score==j.score){
        return j.num - i.num;
    } else
    {
        return i.score - j.score;
    }
}

void swap(struct person &i, struct person &j){
    struct person temp = i;
    i = j;
    j = temp;
}

void sort(int l,int r){
    struct person k = a[l];
    int i = l, j = r;
    while(i<j){
        while(i<j&&cmp(a[j],k)>=0){
            j--;
        }
        while(i<j&&cmp(a[i],k)<=0){
            i++;
        }
        if(i<j){
            swap(a[i],a[j]);
        }
    }
    swap(a[j],a[l]);
    if(l<j) sort(l+1,j);
    if(j<r) sort(j+1,r);
}

void sort2(int n){
	int max;
	int i,j;
	for(i=0;i<n;i++){
		max = i;
		for(j=i;j<n;j++){
			if(cmp(a[j],a[max])>0){
				max = j;
			}
		}
		if(max!=i){
			swap(a[max],a[i]);
		}
	}
}

int main(){
    int n,m;
    int i,j;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        scanf("%d %d",&a[i].num,&a[i].score);
    }
    //sort(0,n-1);
    sort2(n);
    /*for(i=0;i<n;i++){
    	printf("%d %d\n",a[i].num,a[i].score);
    }*/
    
    int num = (double) m  * 1.5;
    int l = a[num-1].score;
    int count = num;
    for(i=num;i<n; i++){
    	if(a[i].score>=l){
    		count++;
		}
    }
    printf("%d %d\n",l,count);
    for(i=0;i<count;i++){
    	printf("%d %d\n",a[i].num,a[i].score);
    }
    return 0;
}


