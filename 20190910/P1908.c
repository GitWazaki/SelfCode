#include<stdio.h>
int n;
int a[500001];
int b[500001];
long long int result;

void func(int l,int r){
    int mid = (l+r)/2;
    if(l==r){
        return;
    }
    int i=l,j=mid+1,k=l,h;
    func(l,mid);
    func(mid+1,r);
    while(i<=mid&&j<=r){
        if(a[i]<=a[j]){
            b[k++]=a[i++];            
        } else {
            b[k++]=a[j++];
            //result += mid - i + 1;
        }
    }

    while(i<=mid){
        b[k++]=a[i++];
    }
    
    while(j<=r){
       b[k++]=a[j++];
    }
    
    for(h=l;h<=r;h++){
        a[h]=b[h];
    }
}

int main(){
    int i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    func(0,n-1);
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    //printf("%lld",result);
    return 0;
}
