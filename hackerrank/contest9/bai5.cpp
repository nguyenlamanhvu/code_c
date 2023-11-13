#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
char chuoi[100];
char out[100];
int count=0;
int main() {
    scanf("%s",chuoi);
    int newcount=0;
    for(int i=strlen(chuoi)-1;i>=0;i--){
        out[newcount++]=chuoi[i];
        count++;
        if(count%3==0 && i!=0)  out[newcount++]=',';
    }
    for(int i=newcount-1;i>=0;i--){
        printf("%c",out[i]);
    }
    return 0;
}