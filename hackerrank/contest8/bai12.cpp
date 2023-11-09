#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void nhapmang(int a[][200], int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
}
void xuatmang(int a[][200], int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
int sort(void const *a,void const *b){
    int *x=(int*)a;
    int *y=(int*)b;
    return *x-*y;
}
int main() {
    int n;
    int a[200][200]={};
    int b[200];
    scanf("%d",&n);
    nhapmang(a,n);
    for(int j=0;j<n;j++){
        for(int i=0;i<n;i++){
            b[i]=a[i][j];
        }
        qsort(b,n,sizeof(int),sort);
        for(int i=0;i<n;i++){
            a[i][j]=b[i];
        }
    }
    xuatmang(a,n);
    return 0;
}