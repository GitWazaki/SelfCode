#include<stdio.h>
#define MAX 10010
int m[MAX][4];

int main(){
    int n;
    int a, b, g, k;
    int x,y;
    scanf("%d", &n);
    int i;
    for (i = 0; i < n; i++){
        scanf("%d %d %d %d", &a, &b, &g, &k);
        m[i][0]=a;
        m[i][1]=b;
        m[i][2]=g;
        m[i][3]=k;
    }
    scanf("%d %d", &x, &y);
    for(i = n-1; i>=0; i--){
        if(m[i][0]<=x&&x<m[i][0]+m[i][2]&&m[i][1]<=y&&y<m[i][1]+m[i][3]){
            printf("%d",i+1);
            return 0;
        }
    }
    printf("-1");
    return 0;
}
