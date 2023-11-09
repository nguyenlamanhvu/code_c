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

int main() {
    int n;
    int a[100][100]={};
    scanf("%d",&n);
    nhapmang(a,n,n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==0 || i==0 || i==n-1 || j==n-1)    printf("%d ",a[i][j]);    
        }
    }
    return 0;
}