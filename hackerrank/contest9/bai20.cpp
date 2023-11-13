#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
char chuoi[10000];
char mem[1000][10000];
int check(char token[]){
    for(int i=0;i<strlen(token);i++){
        if(token[i]!=token[strlen(token)-1-i])  return 0;
    }
    return 1;
}
int sort(const void *a, const void *b){
    char* x=(char*)a;
    char* y=(char*)b;
    return strcmp(x,y);
}
int main() {
    gets(chuoi);
    char *token;
    token = strtok(chuoi, " ");
    int cnt=0;
    while(token !=NULL){
        if(check(token))    strcpy(mem[cnt++],token);
        token = strtok(NULL, " ");
    }
    qsort(mem,cnt,sizeof(mem[0]),sort);
    for(int i=0;i<cnt;i++){
        printf("%s ",mem[i]);
    }
    return 0;
}