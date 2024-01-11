#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
char chuoi[100000];
int count[256];
int sort(void const *a,void const *b){
    char* x=(char*)a;
    char* y=(char*)b;
    return strcmp(x,y);
}
int main() {
    fgets(chuoi,100000,stdin);
    chuoi[strlen(chuoi)-1]='\0';
    for(int i=0;i<strlen(chuoi);i++){
        count[chuoi[i]]++;
    }
    int max=0,min=1e9;
    char char_max,char_min;
    for(int i=0;i<256;i++){
        if(count[i]>=max){
            max=count[i];
            char_max=(char)i;
        }
        if(count[i]<=min && count[i]!=0){
            min=count[i];
            char_min=(char)i;
        }
    }
    printf("%c %d\n",char_max,max);
    printf("%c %d",char_min,min);
    return 0;
}