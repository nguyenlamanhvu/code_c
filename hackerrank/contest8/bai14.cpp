#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void xuatmang(int a[][100], int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int n;
    scanf("%d",&n);
    int c1=0,r1=0,c2=n-1,r2=n-1;
    int count=1;
    int a[100][100];
    while (count<=n*n)
    {
        for(int i=c1;i<=c2;i++){
            a[r1][i]=count++;
        }
        ++r1;
        for(int i=r1;i<=r2;i++){
            a[i][c2]=count++;
        }
        --c2;
        for(int i=c2;i>=c1;i--){
            a[r2][i]=count++;
        }
        --r2;
        for(int i=r2;i>=r1;i--){
            a[i][c1]=count++;
        }
        ++c1;
    }
    xuatmang(a,n,n);
    return 0;
}