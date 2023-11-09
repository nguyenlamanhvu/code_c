#include <stdio.h>
void nhapmang(int a[][500], int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
}
void xuatmang(int a[][500], int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int n;
    int a[500][500]={};
    scanf("%d",&n);
    nhapmang(a,n);
    printf("Pattern 1:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    printf("Pattern 2:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[n-1-i][n-1-j]);
        }
        printf("\n");
    }
    printf("Pattern 3:\n");
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<n;j++){
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    printf("Pattern 4:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][n-1-j]);
        }
        printf("\n");
    }
    return 0;
}