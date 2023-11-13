#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
char chuoi[1000];
void sort(int n){
    for(int i=0;i<n-1;i++){
        int min_pos=i;
        for(int j=i+1;j<n-1;j++){
            if(chuoi[min_pos]>chuoi[j]){
                min_pos=j;
            }
        }
        char tmp=chuoi[i];
        chuoi[i]=chuoi[min_pos];
        chuoi[min_pos]=tmp;
    }
}

int main() {
    fgets(chuoi,1000,stdin);
    sort(strlen(chuoi));
    printf("%s",chuoi);
    for(int i=strlen(chuoi)-2;i>=0;i--){
        printf("%c",chuoi[i]);
    }
    return 0;
}