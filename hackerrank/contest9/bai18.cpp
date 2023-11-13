#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
char chuoi[10000];
char mem[1000][10000];
int sort(const void *a, const void *b){
    char* x=(char*)a;
    char* y=(char*)b;
    if(strlen(x)!=strlen(y))    return strlen(x)-strlen(y);
    else    return strcmp(x,y);
}

int main() {
    gets(chuoi);
    char *token;
    token = strtok(chuoi, " ");
    int cnt=0;
    while(token !=NULL){
        strcpy(mem[cnt++],token);
        token = strtok(NULL, " ");
    }
    qsort(mem,cnt,sizeof(mem[0]),sort);
    for(int i=0;i<cnt;i++){
        printf("%s ",mem[i]);
    }
    return 0;
}