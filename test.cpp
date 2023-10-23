#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void nhapmang(int a[][500],int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
}
void xuatmang(int a[][500],int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
int main(void){   
    int n;
    scanf("%d",&n);
    int a[500][500];
    nhapmang(a,n,n); 
    printf("Pattern 1:\n"); 
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            int temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
    xuatmang(a,n,n);
    printf("Pattern 2:\n"); 
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            int temp=a[n-1-j][n-1-i];
            a[n-1-j][n-1-i]=a[i][j];
            a[i][j]=temp;
        }
    }
    xuatmang(a,n,n);
    printf("Pattern 3:\n"); 
    for(int i=n-1;i>0;i--){
        for(int j=0;j<n;j++){
            int temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
    xuatmang(a,n,n);
}
