#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void nhapmang(int a[][500], int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
}
void xuatmang(int a[][500], int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
int dx[4]={-1,0,1,0};
int dy[4]={0,-1,0,1};
int a[500][500];
int cnt=0,ans=0;
void check(int i, int j, int n, int m){
    a[i][j]=0;
    cnt++;
    for(int k=0;k<4;k++){
        int i1=i+dx[k];
        int j1=j+dy[k];
        if(i1>=0 && j1>=0 && i1<n && j1<m && a[i1][j1]==1){
            check(i1,j1,n,m);
        }
    }
}
int main() {
    int n,m;
    scanf("%d%d",&n,&m);
    nhapmang(a,n,m); 
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]){
                cnt=0;
                check(i,j,n,m);
                ans=fmax(ans,cnt);
            }
        }
    }
    printf("%d",ans);
    return 0;
}