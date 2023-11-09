#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int sort(void const *a,void const *b){
    int *x=(int*)a;
    int *y=(int*)b;
    return *x-*y;
}
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    int count=0;
    while (count<n)
    {
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        qsort(a,n,sizeof(int),sort);
        for(int i=0;i<n;i++){
            printf("%d ",a[i]);
        }
        printf("\n");
        count++;
    }  
    return 0;
}
