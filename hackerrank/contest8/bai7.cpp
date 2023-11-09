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
    int n,u,v;
    int a[300][300]={};
    scanf("%d",&n);
    nhapmang(a,n);
    scanf("%d%d",&u,&v);
    for(int i=0;i<n;i++){
        swap(&a[u-1][i],&a[v-1][i]);
    }
    xuatmang(a,n);
    return 0;
}
