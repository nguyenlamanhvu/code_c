#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void nhapmang(int a[][100], int n, int m){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            scanf("%d",&a[i][j]);
        }
    }
}
int cnt[101];
int main() {
    int n;
    int a[100][100]={};
    scanf("%d",&n);
    nhapmang(a,n,n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(cnt[a[i][j]]==i-1)   cnt[a[i][j]]=i;
        }
    }
    int check=0;
    for(int i=0;i<=100;i++){
        if(cnt[i]==n){
            printf("%d ",i);
            check=1;   
        }
    }
    if(check==0)    printf("NOT FOUND");
    return 0;
}