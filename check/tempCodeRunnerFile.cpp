#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int comp(const void *a,const void *b){
    int *x=(int*)a;
    int *y=(int*)b;
    return *x-*y;
}
void xuatmang(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
int binarySearch(int a[],int n,int x){
    int left=0,right=n-1;
    while (left<=right)
    {
        int mid=(left+right)/2;
        if(x==a[mid])  return 1;
        else{
            if(x>a[mid])   left=mid+1;
            else right=mid-1;
        }   
    }
    return 0;
}
int firstPos(int a[], int n, int x){
    int left=0,right=n-1;
    int res=-1;
    while (left<=right)
    {
        int mid=(left+right)/2;
        if(x==a[mid]){
            res=mid;
            right=mid-1;
        }
        else{
            if(x>a[mid])   left=mid+1;
            else right=mid-1;
        }   
    }
    return res;
}
int lastPos(int a[], int n, int x){
    int left=0,right=n-1;
    int res=-1;
    while (left<=right)
    {
        int mid=(left+right)/2;
        if(x==a[mid]){
            res=mid;
            left=mid+1;
        }
        else{
            if(x>a[mid])   left=mid+1;
            else right=mid-1;
        }   
    }
    return res;
}
int main(void){
    int n,x;
    scanf("%d",&n);
    scanf("%d",&x);
    int a[n];   //mang khoi tao
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("%d %d",firstPos(a,n,x),lastPos(a,n,x));
    //qsort(a,n,sizeof(int),comp);
    
    return 0;
}