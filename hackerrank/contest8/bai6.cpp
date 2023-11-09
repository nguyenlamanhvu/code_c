#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void nhapmang(int a[][300], int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
}
void xuatmang(int a[][300], int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main() {
    int n;
    int a[300][300]={};
    scanf("%d",&n);
    nhapmang(a,n);
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(i==j)    swap(&a[i][j],&a[i][n-1-j]);
        }
    }
    xuatmang(a,n);
    return 0;
}
