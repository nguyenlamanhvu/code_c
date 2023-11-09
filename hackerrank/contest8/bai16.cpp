#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void nhapmang(int a[][50], int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
}
void xuatmang(int a[][50], int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
int dx[4]={-1,0,1,0};
int dy[4]={0,-1,0,1};
void check(int a[][50], int i, int j, int n, int m){
    a[i][j]=0;
    for(int k=0;k<4;k++){
        int i1=i+dx[k];
        int j1=j+dy[k];
        if(i1>=0 && j1>=0 && i1<n && j1<m && a[i1][j1]==1){
            check(a,i1,j1,n,m);
        }
    }
}
int main() {
    int n,m;
    int a[50][50]={};
    scanf("%d%d",&n,&m);
    nhapmang(a,n,m);
    int count=0;    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]){
                count++;
                check(a,i,j,n,m);
            }
        }
    }
    printf("%d",count);
    return 0;
}