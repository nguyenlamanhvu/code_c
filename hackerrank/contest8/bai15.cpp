#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void xuatmang(long long a[][10], int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%lld ",a[i][j]);
        }
        printf("\n");
    }
}
long long fibonanci(int n){
    long long f0=0;
    long long f1=1;
    long long fn=f0+f1;
    if(n==0)    return 0;
    else if(n==1)   return 1;
    else{
        for(int i=2;i<n;i++){
            f0=f1;
            f1=fn;
            fn=f0+f1;
        }
        return fn;
    }
}
int main() {
    int n;
    scanf("%d",&n);
    int c1=0,r1=0,c2=n-1,r2=n-1;
    int count=0;
    long long a[10][10];
    while (count<n*n)
    {
        for(int i=c1;i<=c2;i++){
            a[r1][i]=fibonanci(count);
            count++;
        }
        ++r1;
        for(int i=r1;i<=r2;i++){
            a[i][c2]=fibonanci(count);
            count++;
        }
        --c2;
        for(int i=c2;i>=c1;i--){
            a[r2][i]=fibonanci(count);
            count++;
        }
        --r2;
        for(int i=r2;i>=r1;i--){
            a[i][c1]=fibonanci(count);
            count++;
        }
        ++c1;
    }
    xuatmang(a,n,n);
    return 0;
}