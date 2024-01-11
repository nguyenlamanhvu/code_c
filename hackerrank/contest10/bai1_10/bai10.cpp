#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
char chuoi[100001];
char mem1[100000][100];
char mem2[100000][100];
int sort(const void *a, const void *b){
    char *x=(char*)a;
    char *y=(char*)b;
    return strcmp(x,y);
}
int main() {
    gets(chuoi);
    //chuoi[strlen(chuoi)-1]='\0';
    char *token;
    int cnt=0;
    token = strtok(chuoi, " ");
    while(token !=NULL){
        int check=1;
        for(int i=0;i<cnt;i++){
            if(strcmp(token,mem1[i])==0){
                check=0;
                break;
            }
        }
        if(check){
            strcpy(mem1[cnt],token);
            strcpy(mem2[cnt],token);
            cnt++;
        }
        token = strtok(NULL, " ");
    }
    qsort(mem1,cnt,sizeof(mem1[0]),sort);
    for(int i=0;i<cnt;i++){
        printf("%s ",mem1[i]);
    }
    printf("\n");
    for(int i=0;i<cnt;i++){
        printf("%s ",mem2[i]);
    }
    return 0;
}