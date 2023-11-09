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
int checksnt(int n){
    if(n<2) return 0;
    else{
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0)  return 0;
        }
    }
    return 1;
}
int main() {
    int n;
    int a[200][200]={};
    scanf("%d",&n);
    nhapmang(a,n);
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<=n;j++){
            if((i==j || (i+j)==(n-1) )&& checksnt(a[i][j])==1)    count++;
        }
    }
    printf("%d",count);
    return 0;
}
