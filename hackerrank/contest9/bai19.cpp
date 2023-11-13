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
    return strcmp(x,y);
}
void lower(char token[]){
    for(int i=0;i<strlen(token);i++){
        token[i]=(char)tolower(token[i]);
    }
}
int main() {
    gets(chuoi);
    char *token;
    token = strtok(chuoi, " ");
    int cnt=0;
    while(token !=NULL){
        lower(token);
        strcpy(mem[cnt++],token);
        token = strtok(NULL, " ");
    }
    qsort(mem,cnt,sizeof(mem[0]),sort);
    int ans=cnt;
    for(int i=1;i<cnt;i++){
        if(strcmp(mem[i],mem[i-1])==0)  ans--;
    }
    printf("%d",ans);
    return 0;
}