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
void xuatmang(long long a[][50], int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%lld ",a[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int n,m,p;
    int a[50][50];
    int b[50][50];
    long long c[50][50]={};
    scanf("%d%d%d",&n,&m,&p);
    nhapmang(a,n,m);
    nhapmang(b,m,p);
    for(int i=0;i<n;i++){
        for(int j=0;j<p;j++){
            for(int k=0;k<m;k++){
                c[i][j]+=1ll*a[i][k]*b[k][j];
            }
        }
    }
    xuatmang(c,n,p);
    return 0;
}