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
int dx[8]={-1,0,1,0,-1,1,-1,1};
int dy[8]={0,-1,0,1,-1,1,1,-1};
int check(int a[][100], int i, int j, int n, int m){
    for(int k=0;k<8;k++){
        int i1=i+dx[k];
        int j1=j+dy[k];
        if(i1>=0 && j1>=0 && i1<n && j1<m && a[i][j]<=a[i1][j1]) return 0;
    }
    return 1;
}
int main() {
    int n,m;
    int a[100][100]={};
    scanf("%d%d",&n,&m);
    nhapmang(a,n,m);
    int count=0;    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(check(a,i,j,n,m))    count++;
        }
    }
    printf("%d",count);
    return 0;
}