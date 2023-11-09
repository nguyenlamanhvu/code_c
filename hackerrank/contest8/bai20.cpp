#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void nhapmang(int a[][100], int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
}
int dx[4]={-1,0,1,0};
int dy[4]={0,-1,0,1};
void check(int a[][100],int i, int j,int u, int v, int n, int m){
    a[i][j]=0;
    for(int k=0;k<4;k++){
        int i1=i+dx[k];
        int j1=j+dy[k];
        if(i1>=0 && j1>=0 && i1<n && j1<m && a[i1][j1]==1){
            check(a,i1,j1,u,v,n,m);
        }
    }
}
int main() {
    int n,m,s,t,u,v;
    int a[100][100]={};
    scanf("%d%d",&n,&m);
    scanf("%d%d%d%d",&s,&t,&u,&v);
    --s;--t;--u;--v;
    nhapmang(a,n,m);
    check(a,s,t,u,v,n,m);
    if(a[u][v]==0)    printf("YES");
    else    printf("NO");
    return 0;
}