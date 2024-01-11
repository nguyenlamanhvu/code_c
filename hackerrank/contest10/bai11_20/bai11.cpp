#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
char chuoi[100001];
char mem1[100000][100];

int sort1(const void *a, const void *b){
    char *x=(char*)a;
    char *y=(char*)b;
    return strcmp(x,y);
}
int sort2(const void *a, const void *b){
    char *x=(char*)a;
    char *y=(char*)b;
    if(strlen(x)!=strlen(y))  return strlen(x)-strlen(y);
    else    return strcmp(x,y);
}

int main() {
    gets(chuoi);
    //chuoi[strlen(chuoi)-1]='\0';
    char *token;
    int cnt=0;
    token = strtok(chuoi, " ");
    while(token !=NULL){
        strcpy(mem1[cnt++],token);
        token = strtok(NULL, " ");
    }
    qsort(mem1,cnt,sizeof(mem1[0]),sort1);
    for(int i=0;i<cnt;i++){
        printf("%s ",mem1[i]);
    }
    printf("\n");
    qsort(mem1,cnt,sizeof(mem1[0]),sort2);
    for(int i=0;i<cnt;i++){
        printf("%s ",mem1[i]);
    }
    return 0;
}